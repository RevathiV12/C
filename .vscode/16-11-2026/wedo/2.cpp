#include <iostream>
#include <string>
using namespace std;
void greet(string name) {
    cout << "Hello, " << name << "!";
}
int main() {
    string fullName;
    getline(cin, fullName);
    greet(fullName);
    return 0;
}
