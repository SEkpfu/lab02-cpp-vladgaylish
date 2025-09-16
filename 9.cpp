#include <iostream>
using namespace std;

bool inA(double x, double y) { return false; }
bool inB(double x, double y) { return false; }
bool inC(double x, double y) { return false; }
bool inD(double x, double y) { return false; }

int main() {
    double x,y;
    cin >> x >> y;
    cout << (inA(x,y) ? "Да" : "Нет");
}