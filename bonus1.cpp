#include <iostream>
using namespace std;

int main() {
    double salary, years, bonusPercentage, bonusAmount;
    
    cout << "enter salary: ";
    cin >> salary;
    
    cout << "enter years of service: ";
    cin >> years;
    if (years > 10) {
        bonusPercentage = 15;
    } 
    else if (years >= 5 && years <= 10) {
        bonusPercentage = 10;
    } 
    else {
        bonusPercentage = 6;
    }
    
    bonusAmount = salary * (bonusPercentage / 100.0);
    
    cout << "Bonus = " << bonusAmount << endl;
    
    return 0;
}
