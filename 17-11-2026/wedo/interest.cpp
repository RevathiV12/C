#include <iostream>
using namespace std;
int amount(int principal, int rate, int noofmonths);
int main()
{
    int principal = 1000;
    int rate = 12;
    int noofmonths = 10;
    cout << "\nBefore calculation - main method:" << endl;
    cout << "principal: " << principal << endl;
    cout << "rate: " << rate << endl;
    cout << "noofmonths: " << noofmonths << endl;
    cout << "\n";
    int total = amount(principal, rate, noofmonths);
    cout << "amount: " << total << endl;
    cout << "\nAfter calculation - main method:" << endl;
    cout << "principal: " << principal << endl;
    cout << "rate: " << rate << endl;
    cout << "noofmonths: " << noofmonths << endl;
    cout << "\n";
    return 0;
}
int amount(int principal, int rate, int noofmonths)
{
    cout << "\nBefore calculation - Amount method:" << endl;
    cout << "principal: " << principal << endl;
    cout << "rate: " << rate << endl;
    cout << "noofmonths: " << noofmonths << endl;
    cout << "\n";
    if (principal <= 2000) {
        principal += 1000;
    }
    int si;
    si = principal * rate * noofmonths / 100;
    cout << "amount: " << principal + si << endl;
    cout << "\nAfter calculation - amount method:" << endl;
    cout << "principal: " << principal << endl;
    cout << "rate: " << rate << endl;
    cout << "noofmonths: " << noofmonths << endl;
    cout << "\n";
    return si + principal;
}
