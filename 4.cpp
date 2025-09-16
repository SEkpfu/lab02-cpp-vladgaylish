#include <iostream>
using namespace std;

int main() {
    int dM, dW;
    cin >> dM >> dW;
    bool unlucky = (dM == 13 && (dW == 5 || dW == 2)) || (dM == 17 && dW == 5);
    if (unlucky) cout << "Неудачный день";
}