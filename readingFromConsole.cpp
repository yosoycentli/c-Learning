#include <iostream>

using namespace std;

// This commented code is a sim example of how to make an input. So we ask for two numbers and the return the sum of them.

// int main() {
//     cout << "Enter a values for x and y: ";
//     double x;
//     double y;
//     cin >> x >> y;
//     cout << x + y;

//     return 0;
// }

// Excersice: Write a program to convert a temperature from fahrenheit to celsius
//   clue: (°F − 32) / 1.8 =  °C

int main() {
    cout << "Write a Temperature in °F: " << endl;
    double fahrenheit;
    cin >> fahrenheit;

    double celcius = ( fahrenheit - 32) / 1.8;
    cout << fahrenheit << "°F is equal to: " << celcius << "°C" << endl;

    return 0;
}