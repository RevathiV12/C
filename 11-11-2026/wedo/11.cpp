#include <iostream>
using namespace std;

int main() {
    int tag;
    cin >> tag;
    int evenCount = 0;
    do {
        int digit = tag % 10;
        if (digit % 2 == 0) {
            evenCount++;
        }
        tag = tag / 10;
    } while (tag > 0);
    cout << "Even digits = " << evenCount << endl;
    return 0;
}
