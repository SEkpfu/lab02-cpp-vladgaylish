#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x,y;
    cin >> x >> y;
    double r10 = 1.0;
    double r5  = 2.0;
    double r = sqrt(x*x + y*y);
    int score = 0;
    if (r <= r10) score = 10;
    else if (r <= r5) score = 5;
    cout << score;
}
