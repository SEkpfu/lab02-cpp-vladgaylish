#include <iostream>
using namespace std;

int main() {
    int x; 
    cin >> x;
    switch (x) {
        case 5: cout << "�������"; break;
        case 4: cout << "������"; break;
        case 3: cout << "�����������������"; break;
        case 2:
        case 1: cout << "�����"; break;
        default: cout << "�������";
    }
}