#include <iostream>
#include <string>

using namespace std;

int main() {
    string code, desc;
    cin >> code;
    cin.ignore();
    getline(cin, desc);
    cout << code << endl << desc << endl;
    return 0;
}
