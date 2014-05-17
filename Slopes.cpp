
//
// Note: If you add more sloped, change the NUMBER_OF_SLOPES in defined.h
// Slope values range from 0 to 255
// 
// See bottom of this file for more information.

char SLOPES[][512]  = 
{
	// ADSR 1
	/*
	 ..MM ..............................................................................................
	..IMM ..............................................................................................
	 .MMMD..............................................................................................
	.?MMMM..............................................................................................
	 MMMMMM.............................................................................................
	MMMMMMMM ...........................................................................................
	MMMMMMMMN ..........................................................................................
	MMMMMMMMMO .........................................................................................
	MMMMMMMMMMI.........................................................................................
	MMMMMMMMMMM= .......................................................................................
	MMMMMMMMMMMM7 ......................................................................................
	MMMMMMMMMMMMMMM ....................................................................................
	MMMMMMMMMMMMMMMMMM, .  .............................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMM.........................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM  .................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM888MMMMMMMMM8888MMMMM88888MM...== =. ....:====================
	*/
	{ 144, 149, 154, 159, 164, 169, 174, 180, 185, 190, 196, 201, 206, 211, 216, 225, 231, 237, 240, 243, 247, 249, 251, 247, 245, 241, 233, 232, 223, 215, 209, 202, 196, 194, 188, 184, 180, 176, 172, 169, 165, 162, 158, 155, 151, 148, 144, 141, 137, 134, 130, 127, 123, 120, 116, 113, 109, 106, 103, 100, 97, 94, 91, 88, 85, 83, 80, 78, 76, 74, 73, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 46, 46, 45, 44, 44, 44, 43, 42, 42, 42, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 40, 40, 40, 39, 39, 39, 38, 38, 38, 38, 37, 37, 37, 36, 36, 36, 35, 35, 34, 34, 33, 33, 32, 32, 31, 31, 30, 30, 29, 28, 28, 28, 27, 26, 26, 25, 25, 24, 24, 23, 23, 22, 21, 21, 20, 19, 19, 18, 17, 17, 16, 16, 15, 14, 14, 13, 13, 12, 12, 11, 10, 10, 10, 9, 8, 8, 8, 7, 6, 6, 6, 5, 4, 4, 4, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 1, 1, 0, 2, 2, 3, 0, 3, 0, 0, 6, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3 },



	// ADSR 2
	/*
	M ..................................................................................................
	MM  ................................................................................................
	MMM.................................................................................................
	MMMM ...............................................................................................
	MMMM................................................................................................
	MMMMM ..............................................................................................
	MMMMMM .............................................................................................
	MMMMMMO.............................................................................................
	MMMMMMM.............................................................................................
	MMMMMMMM............................................................................................
	MMMMMMMMM  .........................................................................................
	MMMMMMMMMMM ........................................................................................
	MMMMMMMMMMMMMM  ....................................................................................
	MMMMMMMMMMMMMMMMM...................................................................................
	MMMMMMMMMMMMMMMMMMMMMMI  . .........................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM8888MMMMMMM8888888MM888888888 ~~~~~~~...,~~~==================
	*/
	{ 251, 249, 248, 246, 245, 243, 242, 240, 237, 235, 232, 229, 226, 223, 220, 216, 213, 209, 205, 201, 196, 192, 187, 183, 178, 173, 168, 163, 159, 154, 150, 145, 141, 137, 133, 129, 125, 121, 117, 113, 110, 106, 102, 99, 95, 92, 89, 86, 84, 81, 79, 77, 75, 74, 72, 71, 69, 68, 66, 65, 63, 62, 60, 59, 57, 56, 55, 54, 53, 52, 51, 50, 48, 47, 47, 46, 44, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 32, 31, 30, 29, 29, 28, 27, 27, 26, 26, 25, 24, 24, 23, 23, 22, 21, 21, 20, 20, 19, 19, 18, 18, 17, 17, 16, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 11, 10, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0.359375, 0.140625, 0.0625, 0.0625, 0.125, 0.34375, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.359375, 0.140625, 0.046875, 0.015625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.03125, 0.109375, 0.34375, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3 },



	// ADSR3 - fast decay
	/*
	....................................................................................................
	....................................................................................................
	8...................................................................................................
	M ..................................................................................................
	M...................................................................................................
	M ..................................................................................................
	M ..................................................................................................
	M$,.................................................................................................
	MM .................................................................................................
	MM .................................................................................................
	MM? ................................................................................................
	MMM.................................................................................................
	MMM: ...............................................................................................
	MMMM ...............................................................................................
	MMMMM ..............................................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
	*/	
	{ 250, 247, 233, 222, 209, 195, 180, 166, 151, 137, 124, 113, 101, 92, 83, 75, 68, 61, 54, 48, 43, 38, 34, 31, 28, 25, 22, 20, 18, 17, 15, 14, 13, 12, 11, 11, 10, 10, 9, 9, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 4, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 },



	// ADSR4 - snap, repeat
	/*
	....................................................................................................
	....................................................................................................
	....................................................................................................
	....................................................................................................
	 ...................................................................................................
	....................................................................................................
	 ...................................................................................................
	 ...........................M ......................................................................
	D..........................ZM ......................................................................
	M .........................MM? .....................................................................
	M.........................MMMM......................................................................
	M.........................MMMMM ....................................................................
	MM ......................MMMMMMM,...................................................................
	MMM.....................MMMMMMMMM...................................................................
	MMMMM.   ..............NMMMMMMMMMMM .............................................................. .
	MMMMMMMMMMMMM,...8NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
	*/	
	{ 249, 251, 184, 154, 122, 98, 82, 75, 68, 62, 57, 53, 48, 45, 41, 38, 35, 31, 29, 27, 24, 22, 21, 19, 18, 17, 16, 15, 14, 13, 13, 13, 12, 12, 12, 12, 12, 11, 11, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0.4375, 0.25, 0.1875, 0.0625, 0, 0, 0, 0, 0, 0.0625, 0.125, 0.0625, 0.3125, 1, 0.3125, 0.375, 1, 1, 0.375, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 6, 8, 10, 12, 15, 17, 20, 23, 26, 29, 31, 33, 35, 38, 41, 44, 48, 53, 59, 64, 70, 75, 80, 85, 90, 95, 100, 105, 112, 118, 123, 129, 135, 136, 132, 129, 122, 112, 104, 96, 91, 86, 80, 77, 73, 68, 65, 62, 58, 55, 51, 48, 45, 42, 40, 37, 35, 32, 30, 28, 26, 24, 22, 20, 18, 16, 15, 13, 11, 10, 9, 7, 6, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 },



	// ADSR - round
	/*
	MMMMMMMMMN..........................................................................................
	MMMMMMMMMMMMMM,  ...................................................................................
	MMMMMMMMMMMMMMMMMI .................................................................................
	MMMMMMMMMMMMMMMMMMM?,...............................................................................
	MMMMMMMMMMMMMMMMMMMMM...............................................................................
	MMMMMMMMMMMMMMMMMMMMMM,.............................................................................
	MMMMMMMMMMMMMMMMMMMMMMMM ...........................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMM...........................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMD..........................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMM .........................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMM ........................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMM ........................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMM .......................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMM~.......................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMM.......................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN.....................................................................
	*/

	{ 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 248, 247, 247, 246, 246, 245, 245, 244, 244, 243, 243, 242, 242, 241, 241, 240, 240, 239, 239, 238, 238, 237, 237, 236, 236, 235, 235, 234, 234, 233, 233, 232, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 208, 207, 205, 204, 202, 201, 199, 198, 196, 195, 193, 192, 190, 189, 187, 185, 183, 181, 178, 176, 173, 171, 168, 166, 163, 161, 158, 156, 153, 151, 148, 146, 143, 140, 137, 134, 131, 128, 125, 121, 117, 114, 110, 106, 101, 97, 92, 87, 81, 76, 70, 64, 58, 52, 45, 39, 33, 28, 23, 19, 15, 12, 9, 7, 5, 4, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },


	
	// Descending parabolas
	/*
	7............. ............................................ ................. ......................
	MM............MMM .................................................. ...............................
	MM...........MMMM ..................................................................................
	MMM ........ MMMMD..................................................................................
	MMM.........MMMMMM..................................................................................
	MMM.........MMMMMM ............ ....................................................................
	MMM+........MMMMMM...........MMM....................................................................
	MMMM ......MMMMMMMM.........$MMMM ..................................................................
	MMMM ......MMMMMMMM.........MMMMM ..................................................................
	MMMM ......MMMMMMMM .......+MMMMMM...........M......................................................
	MMMM......MMMMMMMMM7 ......MMMMMMM. .......,MMM  ...................................................
	MMMMM.....MMMMMMMMMM......:MMMMMMMM .......MMMMM ...................................................
	MMMMM ...$MMMMMMMMMM. ....MMMMMMMMM8......MMMMMMM......DM. .........................................
	MMMMM....MMMMMMMMMMMM ...NMMMMMMMMMM ....MMMMMMMMM ...NMMM..........................................
	MMMMMM .MMMMMMMMMMMMMM  IMMMMMMMMMMMMN. MMMMMMMMMMN .MMMMMM. .. . ..................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM................ ..... ..... ...
	*/

	{ 237, 238, 239, 239, 240, 240, 239, 238, 237, 234, 231, 226, 221, 214, 206, 197, 186, 174, 162, 149, 135, 121, 106, 92, 79, 67, 56, 46, 37, 30, 23, 18, 15, 12, 10, 8, 8, 8, 8, 8, 10, 12, 14, 17, 21, 24, 28, 33, 38, 43, 49, 56, 62, 69, 77, 85, 93, 102, 112, 122, 132, 142, 152, 162, 172, 181, 190, 199, 206, 213, 219, 224, 229, 232, 235, 237, 239, 239, 240, 240, 239, 239, 237, 236, 233, 230, 226, 222, 216, 210, 202, 194, 185, 175, 164, 153, 142, 130, 119, 108, 97, 87, 77, 68, 60, 53, 47, 41, 36, 31, 27, 24, 21, 18, 16, 15, 13, 12, 12, 11, 11, 11, 11, 12, 13, 14, 16, 18, 20, 22, 25, 29, 33, 37, 42, 48, 54, 60, 67, 73, 80, 87, 94, 101, 107, 113, 119, 125, 130, 135, 140, 144, 148, 151, 153, 155, 156, 157, 158, 158, 158, 157, 156, 155, 153, 150, 147, 143, 139, 134, 129, 124, 118, 112, 106, 100, 93, 87, 80, 74, 68, 62, 56, 50, 45, 41, 37, 33, 30, 28, 25, 23, 22, 20, 19, 17, 16, 16, 15, 14, 14, 14, 14, 14, 14, 15, 15, 16, 17, 19, 21, 23, 26, 30, 34, 38, 43, 47, 52, 57, 62, 67, 71, 76, 80, 83, 87, 90, 92, 94, 96, 97, 98, 99, 99, 99, 99, 98, 96, 95, 93, 90, 87, 84, 80, 76, 72, 68, 63, 59, 54, 50, 45, 41, 37, 33, 30, 26, 23, 21, 18, 16, 15, 14, 13, 13, 13, 13, 13, 14, 15, 16, 18, 20, 22, 25, 27, 30, 33, 36, 39, 41, 44, 46, 47, 49, 50, 51, 51, 52, 51, 51, 50, 48, 47, 45, 42, 40, 37, 34, 31, 28, 25, 22, 20, 18, 16, 14, 13, 12, 11, 10, 10, 9, 9, 9, 10, 10, 11, 11, 12, 13, 14, 15, 16, 16, 17, 17, 17, 16, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 7, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};



/* 

Ascii art by: http://www.glassgiant.com/ascii/


HTML application for painting slopes by hand:

// index.html
// ====================================================================================

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
	<script src="http://code.jquery.com/jquery-latest.min.js" type="text/javascript"></script>
	<script src="adsr_designer.js"></script>
	<link href="index.css" type="text/css" rel="stylesheet">
</head>
<body>
	<div id="adsr"></div>
	<button id="smooth">Smooth</button>

	<input type="submit" id="submit" value="output">
	<br>
	<textarea></textarea>
	<button id="load">Load</button>
</body>
</html>


// index.css
// ====================================================================================

.col {
	width: 2px;
	height: 256px;
	float: left;
	background-color: #ddd;
	margin-right: 0px;
	position: absolute;
	bottom: 0px;
}

.col div {
	width: 2px;
	height: 200px;
	float: left;
	background-color: #bbb;
	position: absolute;
	bottom: 0px;
}

#adsr {
	position: relative;
	height: 256px;
	width: 1024px;
	border: 5px solid #333;
	background-color: #eeeeee;
}

textarea {
	width: 1024px;
	height: 200px;
}


// adsr_designer.js
// ====================================================================================

var down = false;

$('document').ready(function(){

	$('textarea').val('');

	for(t=0; t<512; t++)
	{
		$('<div class="col"><div></div></div>').appendTo('#adsr').css({left: (t*2)});
	}

	$('.col').mouseover(function(e){
	   var parentOffset = $(this).parent().offset(); 
	   var relX = e.pageX - parentOffset.left;
	   var relY = e.pageY - parentOffset.top;

	   if(down)
	   {
	   	  $(this).find('div').css({height: 256-relY});
	   }
	});


	$(document).mousedown(function() {
	    down = true;
	}).mouseup(function() {
	    down = false;  
	});

	$('#submit').click(function(e) {
		e.preventDefault();
		
		$('textarea').val('');

		count = 0;

		$('.col div').each(function(){
			count++;
			$('textarea').val($('textarea').val() + Math.round($(this).height()));
			if(count < 512) $('textarea').val($('textarea').val() + ', ');
		});
	});

	$('#load').click(function(e) {
		e.preventDefault();
		
		values_csv = $('textarea').val();
		values_array = values_csv.split(', ');

		count = 0;

		$('.col div').each(function(){
			console.log(values_array[count]);
			$(this).height(values_array[count]);
			count++;
		});
	});

	$('#smooth').click(function(e) {

		prev1 = null;
		prev2 = null;
		prev3 = null;
		prev4 = null;

		$('.col div').each(function() {

			if(prev1 != null && prev2 != null && prev3 != null & prev4 != null)
			{
				$(prev2).attr('data-h', ($(prev4).height() + $(prev3).height() + $(prev1).height() + $(this).height() )/4);
			}

			prev4 = prev3;
			prev3 = prev2;
			prev2 = prev1;
			prev1 = this;
		});

		$('.col div[data-h]').each(function() {
			$(this).height($(this).attr('data-h'));
		});		
	});	

});

*/