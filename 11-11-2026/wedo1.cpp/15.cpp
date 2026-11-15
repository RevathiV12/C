#include <iostream>
using namespace std;

int main() {
    int reading;
    cin >> reading;
    do {
        cout << reading << endl;
        reading = reading + 2;
    } while (reading <= 8);
    return 0;
}
