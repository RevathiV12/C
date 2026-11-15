#include <iostream>
using namespace std;

int main() {
    int score = 40;
    int bonus = score++ + 5;
    int total = ++score * 2;
    cout << "score = " << score << endl;
    cout << "bonus = " << bonus << endl;
    cout << "total = " << total << endl;
    return 0;
}
