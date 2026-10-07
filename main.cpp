#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x) {
    cout << "Critical BUG!" << endl;
    return 0;
}

int main() {
    int res = factorial(20);
    cout << "Result: " << res << endl;
}