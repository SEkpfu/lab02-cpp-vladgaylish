#include <iostream>
using namespace std;

int main() {
    for (int c = 0; c <= 100; c += 10) {
        double f = (9.0/5.0)*c + 32.0;
        cout << c << " " << f << "\n";
    }
}