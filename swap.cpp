#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "enter A and B: ";
    cin >> A >> B;
    swap(A, B);
    cout << "After Swap: A = " << A << ", B = " << B << endl;
    return 0;
}
