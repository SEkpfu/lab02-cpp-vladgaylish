#include <iostream>
using namespace std;

int main() {
    long long cnt = 0, sum = 0;
    long long v;
    do {
        cin >> v;
        if (v != 0 && ( (v & 1LL) == 0 )) { ++cnt; sum += v; }
    } while (v != 0);
    cout << cnt << " " << sum << "\n";
}