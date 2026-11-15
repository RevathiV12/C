#include <iostream>
using namespace std;

int main() {
    int days;
    cin >> days;

    int distance = 2;
    int total = 0;
    for (int i = 1; i <= days; i++) {
        total = total + distance;
        cout << "Distance = " << distance << ", Total = " << total << endl;
        distance = distance + 2;
    }
    if (total >= 12) {
        cout << "Days = " << days << endl;
    } else {
        cout << "Target not reached" << endl;
    }
    return 0;
}
