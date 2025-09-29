#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double step = M_PI / 6.0;
    for (double x = 0.0; x <= 2.0 * M_PI + 1e-12; x += step)
        cout << x << " " << cos(x) << "\n";
}