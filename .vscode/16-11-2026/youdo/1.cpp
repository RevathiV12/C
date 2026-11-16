#include <iostream>
using namespace std;
bool isPrime(int number) {
    int count = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count = count + 1;
        }
    }
    if (count == 2) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int number;
    cin >> number;
    if (isPrime(number) == true) {
        cout << "Prime";
    } else {
        cout << "Not prime";
    }
    return 0;
}
