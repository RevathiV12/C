#include <iostream>
using namespace std;
int totalSavings(int days) {
    int total = 0;
    for (int i = 1; i <= days; i++) {
        total = total + (i * 5);
    }
    return total;
}
int main() {
    int days;
    cin >> days;
    cout << totalSavings(days) << " rupees";
    return 0;
}
