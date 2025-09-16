#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n > 0) cout << "Положительное\n";
    else if (n < 0) cout << "Отрицательное\n";
    else cout << "Ноль\n";
    cout << (n % 2 == 0 ? "Четное" : "Нечетное");
}
