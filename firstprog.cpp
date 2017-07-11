//  File: Hello/firstprog.cpp
//  Author: Mihaela Malita
//  Title: input and  output in C++. The use of a variable
//  Run:
//	Please enter an integer?: 5
//	You have entered 5
////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main() {
 int n;   /* call N the integer  */
 cout << " Please enter an integer?: " ;	/*--- get integer number from user---*/
 cin >> n;			/* READ number */
 cout << "You have entered " << n << endl;  /*---  and print the number back	-*/
 return 0;
}
