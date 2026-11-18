#include <iostream>
using namespace std;

int main() {
    int n, count = 0, num = 1, i;
    cin >> n;
    for (num = 2; count < n; num++) {
        for (i = 2; num % i != 0; i++);
        if (i == num) count++;
    }
    cout << num - 1;
    return 0;
}
