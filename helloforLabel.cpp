/*	File: Hello/helloforLabel.cpp
	Author: Mihaela Malita
	Title:   Prints Hello World n times
	Run:
		How many times? 3
		Hello World!
		Hello World!
		Hello World!
----------------------------------------------*/
#include <iostream>
using namespace std; 

int main() {

	int n;
	cout << "How many times? ";
	cin >> n;

	for ( int i =0; i < n; i++ ) {
		cout << "Hello World! \n" ;
	}

//////////////////////////////////////////////
	cout << "\nSame using Label and GOTO\n";
	i = 0;
AGAIN:
	cout << "Hello World! \n" ;
	i = i + 1;   // same as i++;
	if ( i < n ) goto AGAIN;
 
///////////////////////////////////////////
	return 0;
}

