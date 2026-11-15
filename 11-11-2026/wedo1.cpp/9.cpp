#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
            count++;
        }
    }
    cout << "Count = " << count << endl;
    return 0;
}
