#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    if (n < 1) {
        cout << "Invalid input (less than 1)";
    } else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                sum = sum + i;
            }
        }
        cout << sum;
    }
    return 0;
}
