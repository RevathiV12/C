#include <iostream>
using namespace std;

int main() {
    int students = 85, teamSize = 6;
    cout << "Full teams: " << students / teamSize << endl;
    cout << "Left over: " << students % teamSize;
    return 0;
}
