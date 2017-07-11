// File: Hello/hello.cpp
// Author: Mihaela Malita
// Date:  06/02/2004
// Title:   Prints Hello World. Your first program
// Run:
/* Hello World!
*/
//The compiler ignores comments.
/*Compiler is a program that translates a source code from one language (C++)
to machine (assembly) language (the target)
*/
#include <iostream>
// tells the compiler to look in the namespace std (standard namespace)
// for objects (functions, classes, etc.)
using namespace std;  // for cout
// cout is in the namespace
// namespace = a container for a set of identifiers (symbols, names).

int main() { //  always starts execution from main() function
	cout << "Hello World!" ; //prints
	//cout comes from Console OUTput
	return 0;
}//main

