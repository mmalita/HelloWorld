// File: Hello/hellobeep.cpp
// Author: Mihaela Malita
// Title:   Beeps n times
// Run:
//	I will beep. How many times? 10
//      I am beeping 10 times
////////////////////////////////////////////////
#include <iostream>
using namespace std; 
int main() {
	int many;
	cout << "I will beep. How many times? ";
	cin >> many;
	cout << "I am beeping " << many << " times" ;
	for (int i =0; i < many ; i++) {
		cout << " \a";
	}
return 0;
}

