#include <iostream>
using namespace std;

int main() {
    int balance = 85;
    int limit = 20;
    int visits = 0;
    while (balance > 0) {
        if (balance >= limit) {
            cout << limit << endl;
            balance = balance - limit;
        } else {
            cout << balance << endl;
            balance = 0;
        }
        visits++;
    }
    cout << "Visits = " << visits;
    return 0;
}
