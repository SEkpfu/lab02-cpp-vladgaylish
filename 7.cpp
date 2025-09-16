#include <iostream>
using namespace std;

int main() {
    double a,b; char op;
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << a+b; break;
        case '-': cout << a-b; break;
        case '*': cout << a*b; break;
        case '/':
            if (b==0) cout << "Ошибка";
            else cout << a/b;
            break;
        default: cout << "Неизвестно";
    }
}
