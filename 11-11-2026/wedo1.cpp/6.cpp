#include <iostream>
using namespace std;

int main() {
    int ticket;
    cin >> ticket;
    do {
        cout << ticket << endl;
        ticket = ticket + 2;
    } while (ticket <= 9);
    return 0;
}
