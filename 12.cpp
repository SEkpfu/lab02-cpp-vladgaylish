#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int sum = 0;
    if (a>10) sum += a;
    if (b>10) sum += b;
    if (c>10) sum += c;
    cout << sum << "\n";
    int ev = 0;
    if (a%2==0) ev++;
    if (b%2==0) ev++;
    if (c%2==0) ev++;
    cout << ev << "\n";
    int mn = min(a, min(b,c));
    int mx = max(a, max(b,c));
    int mid = a + b + c - mn - mx;
    cout << mid << "\n";
    int idx = 1, val = a;
    if (b < val) { val = b; idx = 2; }
    if (c < val) { val = c; idx = 3; }
    cout << idx;
}
