`timescale 1ns / 1ps
//****************************************************************// 
//  File name: vga_synchronization.v                              // 
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
module vga_synchronization( clk, reset, h_scan, v_scan, pixel_x, 
                            pixel_y, video_on);

	input            clk, reset;
	
	output           h_scan, v_scan, video_on;
	output [9:0]     pixel_x, pixel_y;
	
	reg    [1:0]     p_count, p_n_count;
	reg    [3:0]     red_reg, green_reg, blue_reg; 
	reg    [9:0]     h_count, h_count_next, v_count, v_count_next;
	reg              v_scan_reg, h_scan_reg;
	 

	// Horizontal and Vertical synch signals 
	wire             v_scan_next, h_scan_next;	
	wire             h_end, v_end, p_tick;
	wire             h_video_on, v_video_on;
	
	always @ ( posedge clk, posedge reset )
		if( reset )
			begin 
				v_count <= 10'b0;
				h_count <= 10'b0;
				v_scan_reg <= 1'b0;
				h_scan_reg <= 1'b0; 
			end
			
		else 
			begin 
				v_count <= v_count_next;
				h_count <= h_count_next;
				v_scan_reg <= v_scan_next;
				h_scan_reg <= h_scan_next;
			end
	
	// Horizontal counter: 799
	// Horizontal Scan Count shall range from 0 to 799
	assign h_end = ( h_count == (799) );
	
	// Vertical counter: 524
	// Vertical Scan Count shall range from 0 to 524
	assign v_end = ( v_count == (524) );
	
	// Create 25MHz Tick
	// Update VGA Synchronization Logic at 25MHz rate
	assign p_tick = ( p_count == 3 );
	
	always @ ( posedge clk, posedge reset )
		if ( reset )
			p_count <= 2'b0;
		
		else
			p_count <= p_n_count;
	
	always @ (*)
		p_n_count = ( p_tick ) ? 2'b0 : p_count + 2'b1;
		
	// Horizontal Synchronization Counter 
	always @ (*)
		// Allow the horizontal scan count to update at 25MHz rate 
		if ( p_tick )
			if( h_end )
				h_count_next = 10'b0;
			else 
				h_count_next = h_count + 10'b1; 
		else
			h_count_next = h_count;
	
	
	// Vertical Synchronization Counter 
	always @ (*) 
		if ( p_tick & h_end )
			if(v_end)
				v_count_next = 10'b0;
				
			else 
				v_count_next = v_count + 10'b1;
		else
			v_count_next = v_count;
	
	// Horizontal sync signal shall be low active
	// Horizontal sync signal shall be active from horizontal scan count 656 to 751
	assign h_scan_next = ~( h_count <= (751) && h_count >= (656) );
	
	// Vertical sync signal shall be low active
	// Vertical sync signal shall be active from vertical scan count 490 to 491
	assign v_scan_next = ~( v_count >= (490) && v_count <= (491) );
	
	
	// Video On signal shall be high active
	// Video on signal shall be active when horizontal video on and vertical 
	// video are on at the same time	
	assign h_video_on = ( h_count < 640 );
	assign v_video_on = ( v_count < 480 );
	
	assign video_on = ( (h_count < 640) && (v_count < 480) ); 
	
	
	// Outputs
	assign h_scan = h_scan_reg;
	assign v_scan = v_scan_reg;
	assign pixel_x = h_count;
	assign pixel_y = v_count;

endmodule
