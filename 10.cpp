#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    double x,y,z;
    cin >> x >> y >> z;
    if (x<=0 || y<=0 || z<=0) { cout << "���"; return 0; }
    bool exists = (x + y > z) && (x + z > y) && (y + z > x);
    if (!exists) { cout << "���"; return 0; }
    cout << "��\n";
    const double eps = 1e-9;
    if (fabs(x-y) < eps && fabs(y-z) < eps) cout << "��������������";
    else {
        if (fabs(x-y) < eps || fabs(x-z) < eps || fabs(y-z) < eps)
            cout << "��������������\n";
        double a=x,b=y,c=z;
        if (a>b) swap(a,b); if (b>c) swap(b,c); if (a>b) swap(a,b);
        if (fabs(a*a + b*b - c*c) < eps) cout << "�������������";
    }
}
