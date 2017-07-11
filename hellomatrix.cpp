// File: Hello/hellomatrix.cpp
// Author: MihAela Malita
// Title: Initialize and print a matrix 2 x 2 
/******************************************************
	Matrix is:
	1 2
	3 4
********************************************************/
#include <iostream>
using namespace std;
const int N=2;					// actual size	
void printMatrix(int A[][N]);

/////////////////////////////////////////////////////////////
int main() {				// generate a matrix and check property

	int A[2][2] = {{1,2}, {3,4}};      // declare matrix
	printMatrix(A);

return 0;
}
/////////////////////////////////////////////////////////////
void printMatrix(int X[][N]) {
	cout << "\nMatrix is:\n";
	for (int i=0; i< N; i++) {
		for (int j=0; j < N ; j++) {
			cout << X[i][j] << " ";
		}
	cout << endl;
	}
}
