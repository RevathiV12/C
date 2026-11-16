#include <iostream>
using namespace std;
int countEvenTickets(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            count = count + 1;
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    cout << countEvenTickets(n);
    return 0;
}
