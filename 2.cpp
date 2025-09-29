#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n; cin >> n;
    int neg = 0, sum2 = 0, mn = INT_MAX;
    for (int i = 0, v; i < n; ++i) {
        cin >> v;
        if (v < 0) ++neg;
        if (v >= 10 && v <= 99) sum2 += v;
        if (v < mn) mn = v;
    }
    cout << neg << " " << sum2 << " " << mn << "\n";
}