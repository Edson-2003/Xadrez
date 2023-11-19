#include <stdio.h>
#include <stdlib.h>


/*
	the project is a chess in c, full c, but in the future, this project will rebuild with the QT creator framework
*/

/*
the chessboard is formed by a matrix 8x8, each position is a unit, this
unit contains a color of piece, piece and unit color, why each unit have a
color, and this is used in piece mechanics
*/
struct
chess_piece
{
	int piece;
	int color;
}


struct 
unit
{
	struct chess_piece *piece
	int unit_color
}



struct unit**
generate_chessboard()
{
	struct unit** chessboard = (struct unit**) malloc(n * (sizeof(struct unit*)));

	for(int i = 0; i < n; i++ )
	{
		chessboard[i] = (struct unit*) malloc(n * sizeof(struct unit));
	}
	return chessboard;
}

void
chassboard_destroyer(struct unit** chessboard, int n)
{
	for(int i = 0; i < n; i++)
	{
		free(chessboard[i]);
	}
	free(chessboard);
}





int
main(void)
{
	



	return 0;
}
