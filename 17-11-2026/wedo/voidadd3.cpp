#include <iostream>
using namespace std;
void add(int a, int b, int c) {
    cout << "Sum = " << (a + b + c) << endl;
}
int main() {
    int num1, num2, num3;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2 >> num3;
    add(num1, num2,num3);
    return 0;
}
