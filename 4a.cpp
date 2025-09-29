#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; double x; 
    cin >> n >> x;
    double r = 0.0;
    for (int i = 0; i < n; ++i) r = cos(x + r);
    cout.setf(ios::fixed); cout.precision(10);
    cout << r << "\n";
}