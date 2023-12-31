#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand (time(0));
    const short maxValue = 6;
    const short minValue = 1;
    short firstNumber = (rand() % (maxValue - minValue + 1)) + minValue;
    short sencodtNumber = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << firstNumber << ", " << sencodtNumber;
    return 0;
}