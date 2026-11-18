#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    s.insert(3, "S");
    cout << s << endl;
    s.erase(3, 1);
    cout << s << endl;
    s.replace(0, 1, "B");
    cout << s << endl;
    return 0;
}
