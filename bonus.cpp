#include <iostream>
using namespace std;

int main() {
    int score = 40;
    int bonus = score++ + 5; 
    int total = ++score * 2; 
    cout << "Final score: " << score << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Total: " << total << endl;
    return 0;
}