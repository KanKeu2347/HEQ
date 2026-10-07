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

int main() {
    int res = factorial(20);
    cout << "Result: " << res << endl;
}