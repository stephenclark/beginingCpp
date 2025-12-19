// vatiables 
#include <iostream>


// g++ -Wall -std=c++14 /Users/stephenkennedy-clark/Desktop/C++/section_6/src/main.cpp -o /Users/stephenkennedy-clark/Desktop/C++/section_6/bin/main

// ./Users/stephenkennedy-clark/Desktop/C++/section_6/bin/main

// using namespace std to avoid using the scope resolution :: operator
using std::cout;
using std::endl;
using std::cin;

int main() {

    int room_width;
    int room_length;

    cout << "Enter the width of the room " << endl;
    cin >> room_width;
     cout << "Enter the length of the room " << endl;
    cin >> room_length;

    // area of a room calculator
    int area = room_width * room_length;
    cout << "The area of the room is " << area << " square units." << endl; 
    
    return 0;
}