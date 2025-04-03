#include "calculator.h"
#include <stdexcept>
#include <cmath>
#include <cstdlib> // for rand()
#include <ctime>   // for time()
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) throw runtime_error("Cannot divide by zero");
    return static_cast<double>(a) / b;
}

int factorial(int n) {
    if (n < 0) throw runtime_error("Factorial of negative number not allowed");
    int result = 1;
    for (int i = 2; i <= n; ++i) result *= i;
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int generateRandom(int min, int max) {
    srand(static_cast<unsigned int>(time(0)));
    return min + (rand() % (max - min + 1));
}

int square(int x) {
    return x * x;
}