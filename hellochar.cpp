// File: Hello/hellochar.cpp  Author: Mihaela Malita
// Title: yes or no question
#include <iostream>
using namespace std;
int main() {
    char ans ='y';  // declare variable character
    while( ans == 'y' || ans == 'Y') {
        cout << "Hello";
        cout << "Continue (y/n)? ";   cin >> ans;
    }
    cout << "Goodbye\n\n ";
    return 0;
}//main
