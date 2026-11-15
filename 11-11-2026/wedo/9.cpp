#include <iostream>
using namespace std;

int main() {
    int limit = 10;
    int matches = 0;
    for (int num = 2; num <= limit; num++) {
        int divisors = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisors++;
            }
        }
        if (divisors == 3) {
            cout << num << endl;
            matches++;
        }
    }
    cout << "Matches = " << matches << endl;
    return 0;
}
