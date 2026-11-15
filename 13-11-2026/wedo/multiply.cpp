#include <iostream>
using namespace std;
int main() {
    int num ;
    cout<<"enter num:"<<endl;
    cin>>num;
    while(num >= 10){
    int product = 1;
    int temp = num;
    while(temp>0){
        int digit = temp % 10;
        product = product * digit;
        temp = temp/10;
    }
    cout << "product of digits" << product << endl;
    num = product; 
}
    cout << "single digit = " << num << endl;
    return 0;
 }
