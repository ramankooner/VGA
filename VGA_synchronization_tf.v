`timescale 1ns / 1ps
//****************************************************************// 
//  File name: pixel_generation.v                                 // 
//                                                                // 
//  Created by Raman Kooner on April 11th, 2018                   // 
//  Copyright © 2018                                              // 
//                                                                // 
//                                                                // 
//  In submitting this file for class work at CSULB               // 
//  I am confirming that this is my work and the work             // 
//  of no one else. In submitting this code I acknowledge that    // 
//  plagiarism in student project work is subject to dismissal.   //  
//  from the class                                                // 
//****************************************************************//

module VGA_synchronization_tf;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [11:0] rgb;
	wire h_scan;
	wire v_scan;
	
	// Instantiate the Unit Under Test (UUT)
	VGA_controller uut (
		.clk(clk), 
		.reset(reset), 
		.rgb(rgb), 
		.h_scan(h_scan), 
		.v_scan(v_scan)
	);

	always #5 
		clk = ~clk; 
	
	initial begin
		$timeformat(-9, 2, " ns", 10);
		
		// Initialize Inputs
		clk = 0;
		reset = 0;
		
		@(negedge clk)
			reset = 1;
			
		@(negedge clk) 
			reset = 0;
		
		// On the first 8 clocks we will show that our logic
		// is being updated at a 25Mhz rate because we get a tick
		// at every fourth clock tick
		repeat(8) @(posedge clk)
			$display("Tick: %d", (uut.u1.p_tick));

	end

	always @ (rgb)
		begin 
			
			// If the bar is active, we will display the bar color
			#1 if((uut.u0.bar))
				$display("The bar color is: %b", rgb );
			
			// If the ball is active, we will display the ball color
			#1 if((uut.u0.ball))
				$display("The ball color is: %b", rgb );
			
			// If the wall is active, we will display the wall color
			#1 if((uut.u0.wall))
				$display("The wall color is: %b", rgb );

		end
		
	always @ ((uut.u1.h_count))
		begin
			
			// This will show the range of the horizontal and vertical count
			// It will also show that the vertical count is updated at the 
			// completion of the horizontal scan count
			$display("The horizontal count is: %d  and the vertical count is: %d",(uut.u1.h_count), (uut.u1.v_count));
			
			// The wall is active from horizontal count 32 to 35
			#1 if((uut.u0.wall))
				$display("The horizontal count for the wall is: %d  and the vertical count is: %d",(uut.u1.h_count), (uut.u1.v_count));
			
			// The bar is active from horizontal count 600 to 603 
			// and veritcal count 204 to 276
			#1 if((uut.u0.bar))
				$display("The horizontal count for the bar is: %d  and the vertical count is: %d",(uut.u1.h_count), (uut.u1.v_count));
			
			// The ball is active from horizontal count 580 to 588 
			// and vertical count 238 to 246
			#1 if((uut.u0.ball))
				$display("The horizontal count for the ball is: %d  and the veritcal count is: %d",(uut.u1.h_count), (uut.u1.v_count));
			
			// ERROR MESSAGES
			#1 if(((uut.u1.h_count) >= 32) && ((uut.u1.h_count) <= 35) 
			       && ~(uut.u0.wall))
				$display("Error, At horizontal count: %d, the Wall is: %d", 
				         (uut.u1.h_count), (uut.u0.wall));
			
			#1 if(((uut.u1.h_count) >= 600) && ((uut.u1.h_count) <= 603) 
			       && ((uut.u1.v_count) >= 204) && ((uut.u1.v_count) <= 276) 
					 && ~(uut.u0.bar))
				$display("Error, At horizontal count: %d, the Bar is: %d", 
				          (uut.u1.h_count), (uut.u0.bar));
			
			#1 if(((uut.u1.h_count) >= 580) && ((uut.u1.h_count) <= 588) 
			       && ((uut.u1.v_count) >= 238) && ((uut.u1.v_count) <= 246) 
					 && ~(uut.u0.ball))
				$display("Error, At horizontal count: %d, the Ball is: %d", 
				          (uut.u1.h_count), (uut.u0.ball));
			
			// The horizontal sync signal will be low active 
			// from horizontal count 656 to 751
			#1 if(~h_scan)
				$display("The horizontal sync signal is low active at horiz count: %d", 
				          (uut.u1.h_count));
			
			// The vertical sync signal will be low active 
			// from vertical count 490 to 491
			#1 if(~v_scan)
				$display("The veritcal sync signal is low active at vertical count: %d", 
				          (uut.u1.v_count));
			
			// The horizontal video on will be active from 
			// horizontal count 0 to 639
			#1 if((uut.u1.h_video_on))
				$display("The horizontal video on is active at horizontal count: %d", 
				          (uut.u1.h_count));
			
			// The vertical video on will be active from 
			// vertical count 0 to 479
			#1 if((uut.u1.v_video_on))
				$display("The vertical video on is active at vertical count: %d", 
				          (uut.u1.v_count));
			
			// The video on signal is high active when the horizontal video on
			// and the vertical video on are active
			#1 if((uut.u1.v_video_on) && (uut.u1.h_video_on))
				$display("The video on signal is: %d", (uut.u0.video_on));
			
		end

endmodule

