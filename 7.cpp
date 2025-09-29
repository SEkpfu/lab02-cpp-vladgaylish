#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    double x0, y0, px, py, firstx, firsty;
    cin >> firstx >> firsty;
    px = firstx; py = firsty;
    double per = 0.0;
    for (int i = 2; i <= n; ++i) {
        cin >> x0 >> y0;
        per += hypot(x0 - px, y0 - py);
        px = x0; py = y0;
    }
    per += hypot(firstx - px, firsty - py);
    cout.setf(ios::fixed); cout.precision(10);
    cout << per << "\n";
}