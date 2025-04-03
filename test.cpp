#include <iostream>
using namespace std;
#include "calculator.h"

int main() {
    cout << "Addition: " << add(5, 3) << endl;
    cout << "Subtraction: " << subtract(5, 3) << endl;
    cout << "Multiplication: " << multiply(5, 3) << endl;
    cout << "Division: " << divide(10, 2) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "GCD: " << gcd(20, 15) << endl;
    cout << "LCM: " << lcm(4, 6) << endl;
    cout << "Random number (1 to 10): " << generateRandom(1, 10) << endl;
    cout << "Square of " << x << " is " << square(x) << endl;

    return 0;
}