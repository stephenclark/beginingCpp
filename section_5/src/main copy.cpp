#include <iostream>


// g++ -Wall -std=c++14 /Users/stephenkennedy-clark/Desktop/C++/section_5/src/main.cpp -o /Users/stephenkennedy-clark/Desktop/C++/section_5/bin/main

// using namespace std to avoid using the scope resolution :: operator
using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "using namespace std" << endl;

    int number;
    std::cout << "Enter a number: "; // Prompt the user
    std::cin >> number;             // Extract input from cin and store in 'number'
    std::cout << "You entered: " << number << std::endl;


    return 0;
}