#include <iostream>
using namespace std;

int main() {
    int limit;
    cin >> limit;
    int primeCount = 0;
    for (int card = 2; card <= limit; card++) {
        int divisors = 0;
        for (int i = 1; i <= card; i++) {
            if (card % i == 0) {
                divisors++;
            }
        }
        if (divisors == 2) {
            cout << card << endl;
            primeCount++;
        }
    }
    cout << "Prime cards = " << primeCount << endl;
    return 0;
}
