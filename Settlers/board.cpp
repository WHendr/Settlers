#include "board.h"

Board *Board::InitializeBoard()
{
	//	
	//		   / \ / \ / \
	//		  |   |   |   |
	//		 / \ / \ / \ / \
	//		|   |   |   |   |
	//	   / \ / \ / \ / \ / \
	//	  |   |   |   |   |   |
	//     \ / \ / \ / \ / \ /
	//	    |   |   |   |   |
	//		 \ / \ / \ / \ /
	//		  |   |   |   |
	//		   \ / \ / \ / 
	// 
	//		    0*
	//		    _	
	//	 0 	  /   \   1
	//   1*  *     *  2*
	//	 2   |     |  3
	//	 3*  *     *  4*
	//	 4    \ _ /   5
	//          5*
	// 
	//  * means the "houseplot"
	//

	//First Node
	this->nodes[0].hp[0] = this->houses[0];
	this->nodes[0].hp[1] = this->houses[3];
	this->nodes[0].hp[2] = this->houses[4];
	this->nodes[0].hp[3] = this->houses[7];
	this->nodes[0].hp[4] = this->houses[8];
	this->nodes[0].hp[5] = this->houses[12];

	this->nodes[0].sides[0] = this->roads[0];
	this->nodes[0].sides[1] = this->roads[1];
	this->nodes[0].sides[0] = this->roads[6];
	this->nodes[0].sides[0] = this->roads[7];
	this->nodes[0].sides[0] = this->roads[11];
	this->nodes[0].sides[0] = this->roads[12];

	//Second Node
	this->nodes[1].hp[0] = this->houses[1];
	this->nodes[1].hp[1] = this->houses[4];
	this->nodes[1].hp[2] = this->houses[5];
	this->nodes[1].hp[3] = this->houses[8];
	this->nodes[1].hp[4] = this->houses[9];
	this->nodes[1].hp[5] = this->houses[13];
	this->nodes[0].sides[0] = this->roads[2];
	this->nodes[0].sides[1] = this->roads[3];
	this->nodes[0].sides[0] = this->roads[7];
	this->nodes[0].sides[0] = this->roads[8];
	this->nodes[0].sides[0] = this->roads[13];
	this->nodes[0].sides[0] = this->roads[14];

	//Third Node
	this->nodes[2].hp[0] = this->houses[2];
	this->nodes[2].hp[1] = this->houses[5];
	this->nodes[2].hp[2] = this->houses[6];
	this->nodes[2].hp[3] = this->houses[9];
	this->nodes[2].hp[4] = this->houses[10];
	this->nodes[2].hp[5] = this->houses[14];
	this->nodes[2].sides[0] = this->roads[4];
	this->nodes[2].sides[1] = this->roads[5];
	this->nodes[2].sides[0] = this->roads[8];
	this->nodes[2].sides[0] = this->roads[9];
	this->nodes[2].sides[0] = this->roads[15];
	this->nodes[2].sides[0] = this->roads[16];

	//fourth Node
	this->nodes[3].hp[0] = this->houses[7];
	this->nodes[3].hp[1] = this->houses[11];
	this->nodes[3].hp[2] = this->houses[12];
	this->nodes[3].hp[3] = this->houses[16];
	this->nodes[3].hp[4] = this->houses[17];
	this->nodes[3].hp[5] = this->houses[22];
	this->nodes[3].sides[0] = this->roads[10];
	this->nodes[3].sides[1] = this->roads[11];
	this->nodes[3].sides[0] = this->roads[18];
	this->nodes[3].sides[0] = this->roads[19];
	this->nodes[3].sides[0] = this->roads[24];
	this->nodes[3].sides[0] = this->roads[25];

	//Fifth Node
	this->nodes[3].hp[0] = this->houses[8];
	this->nodes[3].hp[1] = this->houses[12];
	this->nodes[3].hp[2] = this->houses[13];
	this->nodes[3].hp[3] = this->houses[17];
	this->nodes[3].hp[4] = this->houses[18];
	this->nodes[3].hp[5] = this->houses[23];
	this->nodes[3].sides[0] = this->roads[12];
	this->nodes[3].sides[1] = this->roads[13];
	this->nodes[3].sides[0] = this->roads[19];
	this->nodes[3].sides[0] = this->roads[20];
	this->nodes[3].sides[0] = this->roads[26];
	this->nodes[3].sides[0] = this->roads[27];

	//Sixth Node
	this->nodes[3].hp[0] = this->houses[9];
	this->nodes[3].hp[1] = this->houses[13];
	this->nodes[3].hp[2] = this->houses[14];
	this->nodes[3].hp[3] = this->houses[17];
	this->nodes[3].hp[4] = this->houses[18];
	this->nodes[3].hp[5] = this->houses[24];
	this->nodes[3].sides[0] = this->roads[14];
	this->nodes[3].sides[1] = this->roads[15];
	this->nodes[3].sides[0] = this->roads[20];
	this->nodes[3].sides[0] = this->roads[21];
	this->nodes[3].sides[0] = this->roads[28];
	this->nodes[3].sides[0] = this->roads[29];

	//Seventh Node
	this->nodes[3].hp[0] = this->houses[10];
	this->nodes[3].hp[1] = this->houses[14];
	this->nodes[3].hp[2] = this->houses[15];
	this->nodes[3].hp[3] = this->houses[19];
	this->nodes[3].hp[4] = this->houses[20];
	this->nodes[3].hp[5] = this->houses[25];
	this->nodes[3].sides[0] = this->roads[16];
	this->nodes[3].sides[1] = this->roads[17];
	this->nodes[3].sides[0] = this->roads[21];
	this->nodes[3].sides[0] = this->roads[22];
	this->nodes[3].sides[0] = this->roads[30];
	this->nodes[3].sides[0] = this->roads[31];

	//Eighth Node
	this->nodes[3].hp[0] = this->houses[16];
	this->nodes[3].hp[1] = this->houses[21];
	this->nodes[3].hp[2] = this->houses[22];
	this->nodes[3].hp[3] = this->houses[27];
	this->nodes[3].hp[4] = this->houses[28];
	this->nodes[3].hp[5] = this->houses[33];
	this->nodes[3].sides[0] = this->roads[23];
	this->nodes[3].sides[1] = this->roads[24];
	this->nodes[3].sides[0] = this->roads[33];
	this->nodes[3].sides[0] = this->roads[34];
	this->nodes[3].sides[0] = this->roads[39];
	this->nodes[3].sides[0] = this->roads[40];

	//Ninth Node
	this->nodes[3].hp[0] = this->houses[17];
	this->nodes[3].hp[1] = this->houses[22];
	this->nodes[3].hp[2] = this->houses[23];
	this->nodes[3].hp[3] = this->houses[28];
	this->nodes[3].hp[4] = this->houses[29];
	this->nodes[3].hp[5] = this->houses[34];
	this->nodes[3].sides[0] = this->roads[25];
	this->nodes[3].sides[1] = this->roads[26];
	this->nodes[3].sides[0] = this->roads[34];
	this->nodes[3].sides[0] = this->roads[35];
	this->nodes[3].sides[0] = this->roads[41];
	this->nodes[3].sides[0] = this->roads[42];

	//Tenth Node
	this->nodes[3].hp[0] = this->houses[18];
	this->nodes[3].hp[1] = this->houses[23];
	this->nodes[3].hp[2] = this->houses[24];
	this->nodes[3].hp[3] = this->houses[29];
	this->nodes[3].hp[4] = this->houses[30];
	this->nodes[3].hp[5] = this->houses[35];
	this->nodes[3].sides[0] = this->roads[27];
	this->nodes[3].sides[1] = this->roads[28];
	this->nodes[3].sides[0] = this->roads[35];
	this->nodes[3].sides[0] = this->roads[36];
	this->nodes[3].sides[0] = this->roads[43];
	this->nodes[3].sides[0] = this->roads[44];

	//Eleventh Node
	this->nodes[3].hp[0] = this->houses[19];
	this->nodes[3].hp[1] = this->houses[24];
	this->nodes[3].hp[2] = this->houses[25];
	this->nodes[3].hp[3] = this->houses[30];
	this->nodes[3].hp[4] = this->houses[31];
	this->nodes[3].hp[5] = this->houses[36];
	this->nodes[3].sides[0] = this->roads[29];
	this->nodes[3].sides[1] = this->roads[30];
	this->nodes[3].sides[0] = this->roads[36];
	this->nodes[3].sides[0] = this->roads[37];
	this->nodes[3].sides[0] = this->roads[45];
	this->nodes[3].sides[0] = this->roads[46];

	//Twelth Node
	this->nodes[3].hp[0] = this->houses[20];
	this->nodes[3].hp[1] = this->houses[25];
	this->nodes[3].hp[2] = this->houses[26];
	this->nodes[3].hp[3] = this->houses[31];
	this->nodes[3].hp[4] = this->houses[32];
	this->nodes[3].hp[5] = this->houses[37];
	this->nodes[3].sides[0] = this->roads[31];
	this->nodes[3].sides[1] = this->roads[32];
	this->nodes[3].sides[0] = this->roads[37];
	this->nodes[3].sides[0] = this->roads[38];
	this->nodes[3].sides[0] = this->roads[47];
	this->nodes[3].sides[0] = this->roads[48];

	//Thirtheenth Node
	this->nodes[3].hp[0] = this->houses[28];
	this->nodes[3].hp[1] = this->houses[33];
	this->nodes[3].hp[2] = this->houses[34];
	this->nodes[3].hp[3] = this->houses[38];
	this->nodes[3].hp[4] = this->houses[39];
	this->nodes[3].hp[5] = this->houses[43];
	this->nodes[3].sides[0] = this->roads[40];
	this->nodes[3].sides[1] = this->roads[41];
	this->nodes[3].sides[0] = this->roads[49];
	this->nodes[3].sides[0] = this->roads[50];
	this->nodes[3].sides[0] = this->roads[54];
	this->nodes[3].sides[0] = this->roads[55];

	//Fourteenth Node
	this->nodes[3].hp[0] = this->houses[29];
	this->nodes[3].hp[1] = this->houses[34];
	this->nodes[3].hp[2] = this->houses[35];
	this->nodes[3].hp[3] = this->houses[39];
	this->nodes[3].hp[4] = this->houses[40];
	this->nodes[3].hp[5] = this->houses[44];
	this->nodes[3].sides[0] = this->roads[42];
	this->nodes[3].sides[1] = this->roads[43];
	this->nodes[3].sides[0] = this->roads[50];
	this->nodes[3].sides[0] = this->roads[51];
	this->nodes[3].sides[0] = this->roads[56];
	this->nodes[3].sides[0] = this->roads[57];

	//Fifteenth Node
	this->nodes[3].hp[0] = this->houses[30];
	this->nodes[3].hp[1] = this->houses[35];
	this->nodes[3].hp[2] = this->houses[36];
	this->nodes[3].hp[3] = this->houses[40];
	this->nodes[3].hp[4] = this->houses[41];
	this->nodes[3].hp[5] = this->houses[45];
	this->nodes[3].sides[0] = this->roads[44];
	this->nodes[3].sides[1] = this->roads[45];
	this->nodes[3].sides[0] = this->roads[51];
	this->nodes[3].sides[0] = this->roads[52];
	this->nodes[3].sides[0] = this->roads[58];
	this->nodes[3].sides[0] = this->roads[59];

	//Sixteenth Node
	this->nodes[3].hp[0] = this->houses[31];
	this->nodes[3].hp[1] = this->houses[36];
	this->nodes[3].hp[2] = this->houses[37];
	this->nodes[3].hp[3] = this->houses[41];
	this->nodes[3].hp[4] = this->houses[42];
	this->nodes[3].hp[5] = this->houses[46];
	this->nodes[3].sides[0] = this->roads[46];
	this->nodes[3].sides[1] = this->roads[47];
	this->nodes[3].sides[0] = this->roads[52];
	this->nodes[3].sides[0] = this->roads[53];
	this->nodes[3].sides[0] = this->roads[60];
	this->nodes[3].sides[0] = this->roads[61];

	//Seventeenth Node
	this->nodes[3].hp[0] = this->houses[39];
	this->nodes[3].hp[1] = this->houses[43];
	this->nodes[3].hp[2] = this->houses[44];
	this->nodes[3].hp[3] = this->houses[47];
	this->nodes[3].hp[4] = this->houses[48];
	this->nodes[3].hp[5] = this->houses[51];
	this->nodes[3].sides[0] = this->roads[55];
	this->nodes[3].sides[1] = this->roads[56];
	this->nodes[3].sides[0] = this->roads[62];
	this->nodes[3].sides[0] = this->roads[63];
	this->nodes[3].sides[0] = this->roads[66];
	this->nodes[3].sides[0] = this->roads[67];

	//Eighteenth Node
	this->nodes[3].hp[0] = this->houses[40];
	this->nodes[3].hp[1] = this->houses[44];
	this->nodes[3].hp[2] = this->houses[45];
	this->nodes[3].hp[3] = this->houses[48];
	this->nodes[3].hp[4] = this->houses[49];
	this->nodes[3].hp[5] = this->houses[52];
	this->nodes[3].sides[0] = this->roads[57];
	this->nodes[3].sides[1] = this->roads[58];
	this->nodes[3].sides[0] = this->roads[63];
	this->nodes[3].sides[0] = this->roads[64];
	this->nodes[3].sides[0] = this->roads[68];
	this->nodes[3].sides[0] = this->roads[69];

	//Nineteenth Node
	this->nodes[3].hp[0] = this->houses[41];
	this->nodes[3].hp[1] = this->houses[45];
	this->nodes[3].hp[2] = this->houses[46];
	this->nodes[3].hp[3] = this->houses[49];
	this->nodes[3].hp[4] = this->houses[50];
	this->nodes[3].hp[5] = this->houses[53];
	this->nodes[3].sides[0] = this->roads[59];
	this->nodes[3].sides[1] = this->roads[60];
	this->nodes[3].sides[0] = this->roads[64];
	this->nodes[3].sides[0] = this->roads[65];
	this->nodes[3].sides[0] = this->roads[70];
	this->nodes[3].sides[0] = this->roads[71];

	return this;
}
