#include <iostream>
using namespace std;
void showSeats(int seats);
int main() {
    int rowSeats;
    cin >> rowSeats;
    showSeats(rowSeats);   
    return 0;
}
void showSeats(int seats) {
    cout << seats << endl;
}
