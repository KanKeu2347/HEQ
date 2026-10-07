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
    double e = 1.0;
    for (int i = 1; i <= steps; ++i) 
    {
        e += 1.0 / factorial(i);
    }
    return e;
}
int main() {
    int resF = factorial(20);
    double resE = findE(10);
    cout << "Result F: " << resF << endl;
    cout << "Result E: " << resE << endl;
}