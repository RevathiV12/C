#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int rounds = 0;
    while (num >= 10) {
        int product = 1;
        while (num > 0) {
            product = product * (num % 10);
            num = num / 10;
        }
        num = product;
        rounds++;
        cout << "Round " << rounds << ": " << num << endl;
    }
    cout << "Final digit = " << num << endl;
    cout << "Rounds = " << rounds << endl;
    return 0;
}
