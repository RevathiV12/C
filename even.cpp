#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N < 1) {
        cout << "Invalid input (less than 1)" << endl;
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }

    cout << sum << endl;

    return 0;
}
