#include <iostream>
using namespace std;

int main() {
    int locker;
    cin >> locker;
    int *ptr = nullptr;
    if (locker != 0) {
        ptr = &locker;
    }
    if (ptr != nullptr) {
        cout << *ptr << endl;
    } else {
        cout << "No locker" << endl;
    }
    return 0;
}
