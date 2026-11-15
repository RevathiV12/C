#include <iostream>
using namespace std;

int main() {
    int target, deposit;
    cin >> target >> deposit;
    int increase = 20;
    int total = 0;
    int weeks = 0;
    do {
        total = total + deposit;
        weeks++;
        deposit = deposit + increase;
    } while (total < target);
    cout << "Weeks = " << weeks << endl;
    cout << "Savings = " << total << endl;
    return 0;
}
