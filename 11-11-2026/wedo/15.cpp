#include <iostream>
using namespace std;

int main() {
    int limit;
    cin >> limit;
    int count = 0;
    for (int card = 1; card <= limit; card++) {
        int num = card;
        while (num > 0) {
            if (num % 10 == 2) {
                count++;
            }
            num = num / 10;
        }
    }
    cout << "Digit 2 appearances = " << count << endl;
    return 0;
}
