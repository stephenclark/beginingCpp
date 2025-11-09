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

    cout << "Enter the first number: "; // Prompt the user
    cin >> number1;                      // Extract input from cin and store in 'number'

    cout << "Enter the second number: "; // Prompt the user
    cin >> number2;                      // Extract input from cin and store in 'number2'

    cout << "you enterd: " << number1 << " and " << number2 << endl;

    return 0;
}