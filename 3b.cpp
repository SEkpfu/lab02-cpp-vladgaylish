#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; 
    cin >> x;
    double fx;
    if (x <= 0) fx = x*x;
    else {
        if (x < 4.0/5.0) fx = -2;
        else fx = 0;
    }
    if (isnan(fx)) cout << "NaN";
    else cout << fx;
}