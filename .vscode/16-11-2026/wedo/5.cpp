#include <iostream>
using namespace std;
int readChoice() {
    int choice;
    cin >> choice;
    return choice;
}
int main() {
    int ch = readChoice();
    cout << ch;
    return 0;
}
