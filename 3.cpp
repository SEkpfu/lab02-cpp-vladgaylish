#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    double s = 0.0;
    for (int k = 1; k <= n; ++k) s += 1.0 / (2.0 * k);
    cout.setf(ios::fixed); cout.precision(10);
    cout << s << "\n";
}