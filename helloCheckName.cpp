// File: Hello/helloCheckName.cpp Author: Mihaela Malita 06/02/2004
// Title: Ask name then say hello. Read a string with blanks. Type twice enter.
// Run:	What is your name? Alan Turing
//	Hello Alan Turing
#include <iostream>
using namespace std;
int main() {
   string X;        // declare variable string
   cout << "Your name? ";
   cin >> X;
   if ( X == "Jane" || X == "jane" )
	   cout << "Hi Old friend, " << X << endl;
   else
	   cout << " I do no know you. Bye\n";
   return 0;
}
