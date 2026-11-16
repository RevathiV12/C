#include <iostream>
using namespace std;
int countDigits(int ticket) {
    if (ticket == 0) {
        return 1;
    }
    int count = 0;
    while (ticket > 0) {
        count = count + 1;
        ticket = ticket / 10;
    }
    return count;
}
int main() {
    int ticket;
    cin >> ticket;
    cout << countDigits(ticket);
    return 0;
}
