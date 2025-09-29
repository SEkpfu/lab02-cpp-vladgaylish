#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double eps = 0.001;
    double s = 0.0, term;
    int k = 1, sign = 1;
    do {
        term = sign * 1.0 / (2 * k - 1);
        s += term;
        sign = -sign; ++k;
    } while (fabs(term) >= eps);
    cout.setf(ios::fixed); cout.precision(10);
    cout << s << "\n";         // ~ pi/4
}