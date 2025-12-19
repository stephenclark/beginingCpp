// vatiables 
#include <iostream>


// g++ -Wall -std=c++14 /Users/stephenkennedy-clark/Desktop/C++/section_6/PrimiativeTypes/main.cpp -o /Users/stephenkennedy-clark/Desktop/C++/section_6/PrimiativeTypes/main

// ./Users/stephenkennedy-clark/Desktop/C++/section_6/PrimativeTypes/

// using namespace std to avoid using the scope resolution :: operator
using std::cout;
using std::endl;
using std::cin;

int main() {
    /**********************************
     * Charactet Type
     **********************************/
    char middle_initial {'J'};
    cout << "My middle initial is " << middle_initial << endl;

    /**********************************
     * Integer Type
     **********************************/
    unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_on_earth  = 7'600'000'000 ;
    cout << "There are about "<< people_on_earth << " people on earth" << endl;

    long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;



    /**********************************
     * Floating Point Types
     **********************************/

    return 0;
}