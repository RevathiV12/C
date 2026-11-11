#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + i; 
        }
    }
    if (sum == number) {
        cout << "Perfect Number" << endl;
    } else {
        cout << "Not a Perfect Number" << endl;
    }
    return 0;
}
