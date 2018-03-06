/*
Christopher Trinh
CIS 250
16/02/16

This program generates and optionally displays all possible solutions to a 4x4 square.
This program additionally utilizes the use of boolean functions, user input, continue,
and 2d array.


*/

#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int findSquares(bool c);

int main(int argc, char* argv[]) {
	cout << "\nSolutions found: " << findSquares(true) << endl;
}


int findSquares(bool x) {
	int rows, columns;       //Needed for printing the 4x4 
	int a, b, c, d, e, f, g; //Each letter represents another level of loops
	int solutions = 0;       //Number of solutions to be incremented if solutions are found
	int board[4][4];         //4x4 2D int Array initialization

	for (a = 1; a < 16 + 1; a++) {
		board[0][0] = a;
		for (b = 1; b < 16 + 1; b++) {
			board[0][1] = b;
			if (board[0][0] == board[0][1]) continue;
			for (c = 1; c < 16 + 1; c++) {
				board[0][2] = c;
				if (board[0][2] == board[0][0] || board[0][2] == board[0][1]) continue;
				board[0][3] = 34 - board[0][0] - board[0][1] - board[0][2];
				if (board[0][3] < 1 || board[0][3] > 16 || board[0][3] == board[0][0] || board[0][3] == board[0][1] || board[0][3] == board[0][2]) continue;
				for (d = 1; d < 16 + 1; d++) {
					board[1][0] = d;
					if (board[1][0] == board[0][0] || board[1][0] == board[0][1] || board[1][0] == board[0][2] || board[1][0] == board[0][3]) continue;
					for (e = 1; e < 16 + 1; e++) {
						board[1][1] = e;
						if (board[1][1] == board[0][0] || board[1][1] == board[0][1] || board[1][1] == board[0][2] || board[1][1] == board[0][3]
							|| board[1][1] == board[1][0]) continue;
						for (f = 1; f < 16 + 1; f++) {
							board[1][2] = f;
							if (board[1][2] == board[0][0] || board[1][2] == board[0][1] || board[1][2] == board[0][2] || board[1][2] == board[0][3]
								|| board[1][2] == board[1][0] || board[1][2] == board[1][1]) continue;
							board[1][3] = 34 - board[1][0] - board[1][1] - board[1][2];
							if (board[1][3] < 1 || board[1][3] > 16 || board[1][3] == board[0][0] || board[1][3] == board[0][1] || board[1][3] == board[0][2]
								|| board[1][3] == board[0][3] || board[1][3] == board[1][0] || board[1][3] == board[1][1]
								|| board[1][3] == board[1][2]) continue;
							for (g = 1; g < 16 + 1; g++) {
								board[2][0] = g;
								// The rest of the cells are auto-generated based of the value of the 7 previous cells
								// All cells are error checked before continuing
								if (board[2][0] == board[0][0] || board[2][0] == board[0][1] || board[2][0] == board[0][2] || board[2][0] == board[0][3]
									|| board[2][0] == board[1][0] || board[2][0] == board[1][1] || board[2][0] == board[1][2] || board[2][0] == board[1][3]) continue;
								board[3][0] = 34 - board[0][0] - board[1][0] - board[2][0];
								if (board[3][0] < 1 || board[3][0] > 16 || board[3][0] == board[0][0] || board[3][0] == board[0][1] || board[3][0] == board[0][2]
									|| board[3][0] == board[0][3] || board[3][0] == board[1][0] || board[3][0] == board[1][1] || board[3][0] == board[1][2]
									|| board[3][0] == board[1][3] || board[3][0] == board[2][0]) continue;
								board[2][1] = 34 - board[3][0] - board[1][2] - board[0][3];
								if (board[2][1] < 1 || board[2][1] > 16 || board[2][1] == board[0][0] || board[2][1] == board[0][1] || board[2][1] == board[0][2]
									|| board[2][1] == board[0][3] || board[2][1] == board[1][0] || board[2][1] == board[1][1] || board[2][1] == board[1][2]
									|| board[2][1] == board[1][3] || board[2][1] == board[2][0] || board[2][1] == board[3][0]) continue;
								board[2][2] = 34 - board[1][1] - board[1][2] - board[2][1];
								if (board[2][2] < 1 || board[2][2] > 16 || board[2][2] == board[0][0] || board[2][2] == board[0][1] || board[2][2] == board[0][2]
									|| board[2][2] == board[0][3] || board[2][2] == board[1][0] || board[2][2] == board[1][1] || board[2][2] == board[1][2]
									|| board[2][2] == board[1][3] || board[2][2] == board[2][0] || board[2][2] == board[3][0] || board[2][2] == board[2][1]) continue;
								board[3][3] = 34 - board[0][0] - board[1][1] - board[2][2];
								if (board[3][3] < 1 || board[3][3] > 16 || board[3][3] == board[0][0] || board[3][3] == board[0][1] || board[3][3] == board[0][2]
									|| board[3][3] == board[0][3] || board[3][3] == board[1][0] || board[3][3] == board[1][1] || board[3][3] == board[1][2]
									|| board[3][3] == board[1][3] || board[3][3] == board[2][0] || board[3][3] == board[3][0] || board[3][3] == board[2][1]
									|| board[3][3] == board[2][2]) continue;
								board[3][1] = 34 - board[0][1] - board[1][1] - board[2][1];
								if (board[3][1] < 1 || board[3][1] > 16 || board[3][1] == board[0][0] || board[3][1] == board[0][1] || board[3][1] == board[0][2]
									|| board[3][1] == board[0][3] || board[3][1] == board[1][0] || board[3][1] == board[1][1] || board[3][1] == board[1][2]
									|| board[3][3] == board[1][3] || board[3][1] == board[2][0] || board[3][1] == board[3][0] || board[3][1] == board[2][1]
									|| board[3][1] == board[2][2] || board[3][1] == board[3][3]) continue;
								board[3][2] = 34 - board[0][2] - board[1][2] - board[2][2];
								if (board[3][2] < 1 || board[3][2] > 16 || board[3][2] == board[0][0] || board[3][2] == board[0][1] || board[3][2] == board[0][2]
									|| board[3][2] == board[0][3] || board[3][2] == board[1][0] || board[3][2] == board[1][1] || board[3][2] == board[1][2]
									|| board[3][2] == board[1][3] || board[3][2] == board[2][0] || board[3][2] == board[3][0] || board[3][2] == board[2][1]
									|| board[3][2] == board[2][2] || board[3][2] == board[3][3] || board[3][2] == board[3][1]) continue;
								board[2][3] = 34 - board[0][3] - board[1][3] - board[3][3];
								if (board[2][3] < 1 || board[2][3] > 16 || board[2][3] == board[0][0] || board[2][3] == board[0][1] || board[2][3] == board[0][2]
									|| board[2][3] == board[0][3] || board[2][3] == board[1][0] || board[2][3] == board[1][1] || board[2][3] == board[1][2]
									|| board[2][3] == board[1][3] || board[2][3] == board[2][0] || board[2][3] == board[3][0] || board[2][3] == board[2][1]
									|| board[2][3] == board[2][2] || board[2][3] == board[3][3] || board[2][3] == board[3][1] || board[2][3] == board[3][2]) continue;
								solutions++;
								// If the user wanted to see the solutions
								if (x) {
									cout << "\nSolution: " << solutions << endl;
									for (rows = 0; rows < 4; rows++) {
										for (columns = 0; columns < 4; columns++) {
											cout << board[rows][columns] << " ";
										}
										cout << endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return solutions;
}
