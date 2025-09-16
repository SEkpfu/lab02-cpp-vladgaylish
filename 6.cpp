#include <iostream>
using namespace std;

int main() {
    int x; 
    cin >> x;
    switch (x) {
        case 5: cout << "отлично"; break;
        case 4: cout << "хорошо"; break;
        case 3: cout << "удовлетворительно"; break;
        case 2:
        case 1: cout << "плохо"; break;
        default: cout << "неверно";
    }
}