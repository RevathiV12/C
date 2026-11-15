#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string fullName;
    cin >> age;
    cin.ignore();
    getline(cin, fullName);
    cout << "Age: " << age << endl;
    cout << "Full Name: " << fullName << endl;
    return 0;
}
