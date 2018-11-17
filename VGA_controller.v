`timescale 1ns / 1ps
//****************************************************************// 
//  File name: VGA_controller.v                                   // 
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
module VGA_controller( clk, reset, rgb, h_scan, v_scan, button );

	input         clk, reset;
	input  [1:0]  button;
	
	output [11:0] rgb;
	output        h_scan, v_scan;
	
	wire   [9:0] pixel_x, pixel_y;
	wire         video_on;
	
	
	                     //	 clk, reset, h_scan, v_scan, pixel_x, pixel_y, video_on
	
	vga_synchronization u1 ( .clk(clk), .reset(reset), .h_scan(h_scan), .v_scan(v_scan),
	                         .pixel_x(pixel_x), .pixel_y(pixel_y), .video_on(video_on));
	
							  //   clk, reset, rgb, pixel_x, pixel_y, video_on, button
							 
	pixel_generation    u0 ( .clk(clk), .reset(reset), .rgb(rgb), .pixel_x(pixel_x),
	                         .pixel_y(pixel_y), .video_on(video_on), .button(button));


endmodule
