#include <iostream>
using namespace std;

int main() {
    int v, mx = 0, cnt = 0;
    while (cin >> v && v != 0) {
        if (v > mx) { mx = v; cnt = 1; }
        else if (v == mx) ++cnt;
    }
    cout << cnt << "\n";
}