// File: Hello/hellofunc1.cpp
// Author: Mihaela Malita
// Date:  06/02/2004
/* Title: Draw line ask how many times
RUN:
	Draw line. how many stars? 14
	**************

	Continue(y/n)?=y
	Draw line. how many stars? 1
	*

	Continue(y/n)?=n
************************************************/
#include <iostream>
using namespace std;
void line(int n);   
/////////////////////////////////////////////////
int main() {
	   int N;
       char ans ='y';
	   while ( ( ans == 'y') || (ans =='Y') ) {
		   cout << "draw line. how many stars? ";
		   cin >> N;
		   line(N);
	       cout << "\nContinue(y/n)?=" ;
		   cin >> ans;
       }
return 0;
}
////////////////////////////////////////////////
void line(int n) {
	for (int i=0; i < n ; i++) {
		cout << '*';
	}
    cout << endl;
}