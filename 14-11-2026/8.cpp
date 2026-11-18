#include <iostream>
#include <string>

using namespace std;

int main() {
    string code;
    cin >> code;
    cout << code[0] << " " << code[code.size() - 1] << endl;
    return 0;
}
