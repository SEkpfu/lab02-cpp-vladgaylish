#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double X,Y,Z,a,b; 
    cin >> X >> Y >> Z >> a >> b;
    double holeMin = min(a,b), holeMax = max(a,b);
    auto can = [&](double u, double v){
        double smin = min(u,v), smax = max(u,v);
        return smin <= holeMin && smax <= holeMax;
    };
    bool ok = can(X,Y) || can(X,Z) || can(Y,Z);
    cout << (ok ? "Да" : "Нет");
}