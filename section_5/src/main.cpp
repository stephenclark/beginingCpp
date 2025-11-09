#include <iostream>


// g++ -Wall -std=c++14 /Users/stephenkennedy-clark/Desktop/C++/section_5/src/main.cpp -o /Users/stephenkennedy-clark/Desktop/C++/section_5/bin/main

// using namespace std to avoid using the scope resolution :: operator
using std::cout;
using std::endl;
using std::cin;

int main() {
    
    int number1;
    int number2;
    double number3;

    /*
    cout << "Enter two numnbers seperated by a space: "; // Prompt the user
    cin >> number1 >> number2; 
    cout << "you enterd: " << number1 << " and " << number2 << endl;
    */

    cout << "Enter a double number: "; // Prompt the user
    cin >> number3;
    cout << "you enterd: " << number3 << endl;
    return 0;
}