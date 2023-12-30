#include <iostream>
#include <cmath>

using namespace std;


int main(){
    // the floor function round down value, ceil() does the oposite (round up);
    // double result = floor(1.2);
    // cout << result;

    // the pow() function returns the result of the first argument raised to
    //  the power of the second argument.
    // double result = pow(2, 3);
    // cout << result;

// Write a program to calculate the area of a circle
//  hint: π r² = area

     cout << "Enter down below the radius of a circle, in order to calcultae the area of the same circle: " << endl;
    double radius;
    cin >> radius;

    double circleArea = M_PI * pow(radius, 2);
    cout << "Circle area = " << circleArea << endl;
    return 0;
}