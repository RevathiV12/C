#include <iostream>
using namespace std;
int main() {
    int quantity = 40, buyPrice = 18, sellPrice = 25;
    int profitPerBook = sellPrice - buyPrice;
    int totalProfit = quantity * profitPerBook;
    cout << "Total profit: " << totalProfit << " rupees";
    return 0;
}
