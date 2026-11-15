#include <iostream>
using namespace std;

int main() {
    int participants;
    cin >> participants;
    int count = 0;
    for (int i = 1; i <= participants; i++) {
        cout << i << endl;
        count++;
    }
    cout << "Passes stamped = " << count << endl;
    return 0;
}
