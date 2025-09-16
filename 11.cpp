#include <iostream>
using namespace std;

string ru_year_word(int n) {
    int n10 = n % 10, n100 = n % 100;
    if (n10 == 1 && n100 != 11) return "год";
    if (n10 >= 2 && n10 <= 4 && !(n100 >= 12 && n100 <= 14)) return "года";
    return "лет";
}

int main() {
    int bd, bm, by, cd, cm, cy;
    cin >> bd >> bm >> by >> cd >> cm >> cy;
    int age = cy - by;
    if (cm < bm || (cm == bm && cd < bd)) age--;
    if (age < 0) { cout << "Ошибка"; return 0; }
    cout << age << " " << ru_year_word(age);
}
