// Matrix 6 6 advanced Diagonal printing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int matrix[6][6] = {

	{ 1, 2, 3, 4, 5, 6 },
	{ 7, 8, 9, 10, 11, 12 },
	{ 13, 14, 15, 16, 17, 18 },
	{ 19, 20, 21, 22, 23, 24 },
	{ 25, 26, 27, 28, 29, 30 },
	{ 31, 32, 33, 34, 35, 36 }

	};


	for (int i = 0; i < 6; i++) {
		cout << "{ ";
		for (int j = 0; j < 6; j++) {
			//matrix[i][j] = matrix[i][j];
			//printf("%d, ", matrix[i][j]);
			//int jj;
			//if (matrix[i][j] == j) cout << matrix[i][j];
			//if (matrix[i][j] == 2) cout << matrix[i][j];
			//int gee = i;
			if (j == i) cout << matrix[i][j];
			//if(j == 5 && i == 5)cout << matrix[i][j];
			//gee = gee++;
			//else if (j == 1)
				//matrix[i + 1][j] && matrix[i][j + 1];
					//cout << matrix[i][j] << " " ;
			//if (i + 1 && j + 1)
			//	cout << j;

		}
		cout << " }";
		cout << endl;
	}

	return 0;
}


