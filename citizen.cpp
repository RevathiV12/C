#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "enter age: ";
    cin >> age;
    if (age >= 60) {
        cout << "Eligible for senior citizen discount" << endl;
    } else {
        cout << "Not eligible for senior citizen discount" << endl;
    }
    
    return 0;
}
