// File: Hello/helloname.cpp // Author: Mihaela Malita
// Title: read strings
/////////////////////////////////////////////////
#include <iostream>
using namespace std;
#include <string>  // for using a string
int main() {
   string x,y;  // declare variable string
   cout << "What is your first name? "; // print (output)
   cin >> x;
   cout << "What is your last name? "; 
   cin >> y;   // read (input) till first blank
   cout << "Hello " << x << " "<< y << endl;    
//	What is your name? Alan Turing //	Hello Alan Turing
   cout << "What is your name? "; //output question
   getline(cin,x);         // read string with blanks. Type twice enter?!
   cout << "Hello " << x << endl;    
return 0;
}

