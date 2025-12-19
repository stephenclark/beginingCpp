/*
 *  Program to mesure the speed of a moving object based on the change in 
 *  frequency of microwaves due to the Doppler effect.
 *  v = C*(R-E)/ (R+E)
 * 
 * g++ -Wall -std=c++14 ./main.cpp -o main
 */

#include <iostream>
#include <string>
#include <iomanip>   // Required for std::fixed and std::setprecision

using namespace std;

int main()
{   
    /*
    // get the frequency of the wave emitted by the source
    cout << "Frequency Emitted:" << endl;
    double frequency_emitted;
    cin >> frequency_emitted;

    // get the frequency of the wave received by the observer
    cout << "Frequency Recieved" << endl;
    double frequency_recieved;
    cin >> frequency_recieved;
    */
    
    double frequency_emitted = 2.0e10;
    double frequency_recieved = 2.00000035e10;
    cout << "Frequency Emitted:" << frequency_emitted << " Frequency Recieved:" << frequency_recieved << endl;

    double v;
    const double C = 6.685e8; // speed of light in m/s
    v = C * (frequency_recieved - frequency_emitted) / (frequency_recieved + frequency_emitted);
    cout << "Speed of the object is: " << v << " mph" << endl;

    // what ius the requency received if the object is moving at 70 mph
    double desired_speed = 70.0;
    double frequency_needed;
    frequency_needed = - frequency_emitted * (C + desired_speed) / (desired_speed - C);
    cout << "Frequency needed to detect an object moving at " << desired_speed << " mph is: " << setprecision(12)  << frequency_needed << " Hz" << endl;
  

    return 0;
}