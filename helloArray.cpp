// File: Hello/helloArray.cpp
// Author: Read and write A[]
/****************************************************** 
A[0]?= 2
A[1]?= 3
A[2]?= 1
        0       2
        1       3
        2       1
********************************************************/
#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////
int main() {
   const int n = 3;     // actual size
   int A[n];
	for (int i = 0; i < n; i++) {     // initialize array
       cout << "A[" << i << "]?= ";
	   cin >> A[ i ];
   }
	for (i = 0; i < n; i++) {      // print array
		cout << '\t' << i << '\t' << A[ i ] << endl;
	}
    return 0;
}




