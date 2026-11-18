#include <iostream>
using namespace std;

int main() {
    int amt = 4860;
    cout << "500 notes: " << amt / 500 << endl;
    amt = amt % 500;
    cout << "100 notes: " << amt / 100 << endl;
    amt = amt % 100;
    cout << "50 notes: " << amt / 50 << endl;
    amt = amt % 50;
    cout << "10 notes: " << amt / 10;
    return 0;
}
