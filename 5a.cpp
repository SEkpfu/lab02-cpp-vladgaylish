#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double r,a,b,z,c;
    cin >> r >> a >> b >> z >> c;
    bool fitsXY = (2*r <= min(a,b));
    bool fitsZ  = (z <= c);
    cout << (fitsXY ? "�� ��������� ��\n" : "�� ��������� ���\n");
    cout << (fitsXY && fitsZ ? "��������� ��" : "��������� ���");
}