#include <iostream>
using namespace std;
int readTeamSize() {
    int size;
    cin >> size;
    return size;
}
int main() {
    int n = readTeamSize();
    cout << n;
    return 0;
}
