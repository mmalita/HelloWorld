// File: Hello/helloMore.cpp
// Author: Mihaela Malita
// Title: Say "Hello World!. ask for more? 
/*	Run:
			Hello, World!
			More ( 1-yes or 0-no)? 1
			Hello, World!
			More ( 1-yes or 0-no)? 1
			Hello, World!
			More ( 1-yes or 0-no)? 0
			 Bye
***********************************************/
#include <iostream>
using namespace std;
#include <string>  // for using a string

int main() {

       bool answer;  // declare boolean variable (true or false)

   AGAIN:    // label
	   cout << "Hello, World! \n"; //output question
	   
	   cout << "More ( 1-yes or 0-no)? ";
	   cin >> answer;
	   if ( answer )
		   goto AGAIN;    //jumps to the LABEL

		cout << " Bye\n";
   
return 0;
}
