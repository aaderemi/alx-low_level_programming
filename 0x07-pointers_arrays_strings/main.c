#include "main.h"
#include <stdio.h>

int main(void)
{
	char board[4][2] = {
		{'a', 'b'},
		{'c', 'd'},
		{'e', 'f'},
		{'g', 'h'}
	};
	print_chessboard(board);

	return (0);
}
