/*	File: Hello/hellofunc0.cpp
	Author: Mihaela Malita
	Title: Sayhi
	Run:		Hello, I am a smart computer.
                I know C++ !
                Good bye.
-------------------------------------------------*/
#include <iostream>
using namespace std;
void sayhi();   // declare function
/* ------------------ main -----------------------*/
int main() {
	sayhi();		// call function
    cout << "\nGood bye.\n" ;
return 0;
}
/* ------------ define function ----------- */
void sayhi() {
	cout << "\nHello, I am a smart computer. "
		 << "\nI know C++ !" << endl;

}
