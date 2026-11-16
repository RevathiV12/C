#include <iostream>
#include <cmath>
using namespace std;
int tablesNeeded(int students) {
    int tables = ceil(students / 4.0);
    return tables;
}
int main() {
    int n;
    cin >> n;
    cout << tablesNeeded(n);
    return 0;
}
