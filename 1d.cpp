#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (double x = -1.5; x <= 1.5 + 1e-12; x += 0.25) {
        double y;
        if (x <= -0.5) y = sqrt(fabs(cos(x)));
        else if (x <= 0.5) y = x * x;
        else y = 1.0 - x;
        cout << x << " " << y << "\n";
    }
}
