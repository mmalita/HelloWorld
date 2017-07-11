// File: Control/hellofor.cpp
// Author: Mihaela Malita
// Title:   Prints Hello World n times
// Run:
//  How many times? 3
//	Hello World!
//	Hello World!
//	Hello World!
//
// BYE!
////////////////////////////////////////////////
#include <iostream>

using namespace std; 

int main() {

	int many;

	 cout << "How many times? ";
     cin >> many;

     for (int i =0; i < many ; i++) {
		cout << " Hello World! \n" ;
     }

	 return 0;
}

