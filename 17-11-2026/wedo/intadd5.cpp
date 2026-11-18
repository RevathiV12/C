#include <iostream>
using namespace std;
int add(int a, int b, int c) {
    int sum = a + b + c;
    return sum;
}
int main() {
    int result = add(10, 20, 30);
    cout << "Sum = " << result << endl;
    return 0;
}
