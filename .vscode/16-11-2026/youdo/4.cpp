#include <iostream>
using namespace std;
int sum(int first, int second) {
    int total = first + second;
    return total;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
    return 0;
}
