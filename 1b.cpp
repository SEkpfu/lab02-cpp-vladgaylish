#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 0.0;
    do {
        cout << x << " " << log(x + 1.0) * sin(x) << "\n";
        x += 0.5;
    } while (x <= 5.0);
}