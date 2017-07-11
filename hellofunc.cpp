// File: Hello/hellofunc.cpp
// Author: Mihaela Malita 
// Title: Ask name then say hello.
// Run:

/////////////////////////////////////////////////
#include <iostream>
using namespace std;

void sayhi();   
/////////////////////////////////////////////////
int main() {
char answer='y';

	   while (answer == 'y' ) {
		   sayhi();

	       cout << "\nContinue(y/n)?=" ;
		   cin >> answer;
       }

return 0;
}
////////////////////////////////////////////////
void sayhi() {
	cout << "\nHello, I am a smart computer "
		<< "\nI know C++ "<< endl;

}