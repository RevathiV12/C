#include <iostream>
using namespace std;
int main() {
    int score = 40;
    int bonus = score++ + 5;
    int total = ++score * 2;
    cout << "Score: " << score << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Total: " << total;
    return 0;
}
