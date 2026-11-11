#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "enter number: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++; 
        }
    }
    cout << count << endl;
    return 0;
}
