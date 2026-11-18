#include <iostream>
using namespace std;
void add() {
    int a,b;
    cout << "Sum = " << (a + b) << endl;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    add(num1, num2);
    return 0;
}
void add(int a,int b) {
    int sum;  
    sum = a + b;
    cout << "Sum = " << sum << endl;
}
{
    add(15,25);
    return 0;
}
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
int add(int a, int b) {
    int sum = a + b;
    return sum;
}
int main() {
    int result = add(10, 20);
    cout << "Sum = " << result << endl;
    return 0;
}
int add(int a, int b, int c) {
    int sum = a + b + c;
    return sum;
}
int main() {
    int result = add(10, 20, 30);
    cout << "Sum = " << result << endl;
    return 0;
}

