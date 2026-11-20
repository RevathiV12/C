#include <iostream>
using namespace std;

int main() {
    int counter1, counter2;
    cin >> counter1 >> counter2;
        int *p = &counter1;
        int *q = p;
        ++*q;
        q = &counter2;
        cout << *p << " " << *q << endl;
    return 0;
}
