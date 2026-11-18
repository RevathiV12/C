#include <iostream>
using namespace std;
int previewBalance(int balance, int cost);
int main() {
    int currentBalance, purchaseCost;
    cin >> currentBalance >> purchaseCost;
    int updatedPreview = previewBalance(currentBalance, purchaseCost);
    cout << currentBalance << " " << updatedPreview << endl;
    return 0;
}
int previewBalance(int balance, int cost) {
    balance = balance - cost; 
    return balance;           
}
