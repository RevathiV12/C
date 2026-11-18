#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, club;
    cin >> name >> club;
    string badge = name + " - " + club;
    cout << badge << endl;
    if (club == "Robotics") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
