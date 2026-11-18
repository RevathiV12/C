#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    getline(cin, fullName);
    for (int i = 0; i < fullName.size(); i++) {
        if (fullName[i] == ' ') {
            break;
        }
        cout << fullName[i];
    }
    cout << endl;
    return 0;
}
