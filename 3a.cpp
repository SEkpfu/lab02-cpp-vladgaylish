#include <iostream>
using namespace std;

int main() {
    double x; 
    cin >> x;
    double fx;
    if (x <= 0) fx = x*x;
    else {
        if (x < 4.0/5.0) fx = -2;
        else fx = x*x + x + 1;
    }
    cout << fx;
}