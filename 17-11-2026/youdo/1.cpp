#include <iostream>
using namespace std;
int previewTicketPrice(int price);
int main() {
    int ticketPrice;
    cin >> ticketPrice;
    int previewPrice = previewTicketPrice(ticketPrice);
    cout << ticketPrice << " " << previewPrice << endl;
    return 0;
}
int previewTicketPrice(int price) {
    price = price + 20; 
    return price;       
}
