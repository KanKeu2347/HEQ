#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x) {
    int res = 1;
    for (int i = 1; i <= x; i++) 
    {
        res *= i;
    }
    return res;
}

double findE(int steps) {
    double sum = 0;
    for (int i = 0; i < steps; i++) {
        sum += 1 / factorial(i);
    }
    return sum;
}
int main() {
    int resF= factorial(20);
    double resE = findE(12);
    cout << "Result F: " << resE << endl;
    cout << "Result E: " << resF << endl;
}