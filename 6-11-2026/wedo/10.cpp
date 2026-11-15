#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 10 == 0) {
        cout << "Divisible by 10";
    } else {
        cout << "Not divisible by 10";
    }
    return 0;
}
