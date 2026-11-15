#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cin >> word;
    cout << "Length: " << word.length() << endl;
    cout << "First character: " << word.at(0) << endl;
    cout << "Character at index 2: " << word.at(2) << endl;
    cout << "Last valid index: " << word.length() - 1 << endl;
    return 0;
}
