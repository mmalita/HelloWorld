/*	File: Hello/helloString.cpp
C++ Strings
s.length() AND s.size()
both return the number of characters in the string
			First letter of Leibniz is L
			Leibniz length is 7
			Last letter of Leibniz is z
************************************************/
#include <iostream>
using namespace std;
//#include <string>
int main(){
	string X = "Leibniz";
	cout << "First letter of " << X
		 << " is " << X[0] <<endl;
	int n = X.size();	 // or X.length();
    cout << X << " length is " << n << endl;
	cout << "Last letter of " << X
		 << " is " << X[n-1] <<endl;
 	return 0;
}
