#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n > 0) cout << "�������������\n";
    else if (n < 0) cout << "�������������\n";
    else cout << "����\n";
    cout << (n % 2 == 0 ? "������" : "��������");
}
