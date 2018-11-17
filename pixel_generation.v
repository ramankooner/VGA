`timescale 1ns / 1ps
//****************************************************************// 
//  File name: pixel_generation.v                                 // 
//                                                                // 
//  Created by Raman Kooner on May 2nd, 2018                      // 
//  Copyright © 2018                                              // 
//                                                                // 
//                                                                // 
//  In submitting this file for class work at CSULB               // 
//  I am confirming that this is my work and the work             // 
//  of no one else. In submitting this code I acknowledge that    // 
//  plagiarism in student project work is subject to dismissal.   //  
//  from the class                                                // 
//****************************************************************//
module pixel_generation( clk, reset, rgb, pixel_x, pixel_y, video_on, button );
	
	input         clk, reset; 
	input  [1:0]  button;
	input  [9:0]  pixel_x, pixel_y;
	input         video_on;
	
	output [11:0] rgb;
	
	reg    [11:0] rgb; 
	
	wire          ref_tick;
	
	//-----------------------------------------------
	//                      BAR 
	//-----------------------------------------------
	// Register to track top boundary for bar
	reg    [9:0]  bar_y_reg, bar_y_next; 
	// Bar top, bottom boundary 
	wire   [9:0]  bar_y_t, bar_y_b;
	localparam    BAR_Y_SIZE = 72;
	localparam    BAR_V      = 4;
	
	//-----------------------------------------------
	//                      BALL 
	//-----------------------------------------------
	// Ball left, right boundary 
	wire   [9:0]  ball_x_l, ball_x_r; 
	// Ball top, bottom boundary 
	wire   [9:0]  ball_y_t, ball_y_b;
	// Register to track top boundary for ball
	reg    [9:0]  ball_x_reg, ball_y_reg;
	wire   [9:0]  ball_x_next, ball_y_next;
	// Register to track ball speed
	reg    [9:0]  x_delta_reg, x_delta_next;
	reg    [9:0]  y_delta_reg, y_delta_next;
	
	wire   [2:0]  rom_addr, rom_col;
	reg    [7:0]  rom_data;
	wire          rom_bit;
	
	
	wire          wall, ball, bar, r_ball;
	wire   [11:0] wall_color, ball_color, bar_color;
	
	
	//-----------------------------------------------
	//                   BALL IMAGE 
	//-----------------------------------------------
	always @ (*)
		
		case(rom_addr)
			3'h0: rom_data = 8'b00111100; //   ****
			3'h1: rom_data = 8'b01111110; //  ******
			3'h2: rom_data = 8'b11111111; // ********
			3'h3: rom_data = 8'b11111111; // ********
			3'h4: rom_data = 8'b11111111; // ********
			3'h5: rom_data = 8'b11111111; // ********
			3'h6: rom_data = 8'b01111110; //  ******
			3'h7: rom_data = 8'b00111100; //   ****
		endcase 
			
	//-----------------------------------------------
	//                   REGISTERS
	//-----------------------------------------------
	always @ ( posedge clk, posedge reset )
		
		if( reset )
			begin 
				bar_y_reg   <= 10'b0;
				ball_x_reg  <= 10'b0;
				ball_y_reg  <= 10'b0;
				x_delta_reg <= 10'h004;
				y_delta_reg <= 10'h004;
			end
		
		else
			begin 
				bar_y_reg   <= bar_y_next;
				ball_x_reg  <= ball_x_next;
				ball_y_reg  <= ball_y_next;
				x_delta_reg <= x_delta_next;
				y_delta_reg <= y_delta_next;
			end
			
	//-----------------------------------------------
	//                      TICK
	//-----------------------------------------------
	assign ref_tick = ( pixel_y == 481 ) && ( pixel_x == 0 );
	
	//-----------------------------------------------
	//                      WALL
	//-----------------------------------------------
	// The wall shall occupy the region from horizontal scan count 
	// 32 through 35
	assign wall = ( pixel_x >= 32 ) && ( pixel_x <= 35 );
	assign wall_color = 12'b000000001101;
	
	//-----------------------------------------------
	//                      BAR 
	//-----------------------------------------------
	// The Paddle shall occupy the region from horizontal scan count 
	// 600 through 603 and vertical scan count 204 to 276
	assign bar = ( pixel_x >= 600 ) && ( pixel_x <= 603 ) && 
					 ( pixel_y >= bar_y_t ) && ( pixel_y <= bar_y_b );
					 
	assign bar_color = 12'b010100000000;
	
	// Bar boundary
	assign bar_y_t = bar_y_reg;
 	assign bar_y_b = bar_y_t + BAR_Y_SIZE - 10'b1;
	
	// New Bar position 
	always @ (*) 
		begin 
			bar_y_next = bar_y_reg;
			if ( ref_tick )
				if ( button[1] & ( bar_y_b < 475 ) )
					bar_y_next = bar_y_reg + BAR_V; // moves down
					
				else if ( button[0] & ( bar_y_t > 4 ) )
					bar_y_next = bar_y_reg - BAR_V; // moves up
		end 
		
	//-----------------------------------------------
	//                      BALL 
	//-----------------------------------------------
	// The ball shall occupy the region from horizontal scan count 
	// 580 through 588 and vertical scan count 238 through 246
	assign ball = ( pixel_x >= ball_x_l ) && ( pixel_x <= ball_x_r ) &&
					  ( pixel_y >= ball_y_t ) && ( pixel_y <= ball_y_b );
					  
	assign ball_color = 12'b000011000000;
			
	// Ball boundary
	assign ball_x_l = ball_x_reg;
	assign ball_y_t = ball_y_reg;
	assign ball_x_r = ball_x_l + 7;
	assign ball_y_b = ball_y_t + 7;
	
	// Current pixel location to ROM addr
	assign rom_addr = pixel_y[2:0] - ball_y_t[2:0];
	assign rom_col  = pixel_x[2:0] - ball_x_l[2:0];
	assign rom_bit  = rom_data[rom_col];
	
	//Pixel within ball
	assign r_ball = ball & rom_bit;
	
	// New ball position
	assign ball_x_next = ( ref_tick ) ? ball_x_reg + x_delta_reg : ball_x_reg;
	assign ball_y_next = ( ref_tick ) ? ball_y_reg + y_delta_reg : ball_y_reg; 
	
	// New ball velocity
	always @ (*)
		begin 
			x_delta_next = x_delta_reg;
			y_delta_next = y_delta_reg;
			if ( ball_y_t < 1 )        // ball reached top
				y_delta_next = 2;
				
			else if ( ball_y_b > 479 ) // ball reached bottom
				y_delta_next = -2;
			
			else if ( ball_x_l <= 35 ) // ball bounced back
				x_delta_next = 2; 
				
			else if (( ball_x_r >= 600 ) && ( ball_x_r <= 603 ) && 
						( bar_y_t  <= ball_y_b ) && ( ball_y_t <= bar_y_b ))
						// reach x of right bar and hit, ball bounce back
				x_delta_next = -2;
		end 
	
	// Assigns the colors to the ball, paddle and wall	
	always @ (*)
		
		if ( ~video_on )
			rgb = 12'b000000000000;
			
		else 
			if( wall )
				rgb = wall_color;
			
			else if ( bar )
				rgb = bar_color;
			
			else if ( r_ball )
				rgb = ball_color;
			
			else
				rgb = 12'b111111111111;

endmodule
