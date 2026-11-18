#include <iostream>
using namespace std;
const int hallCapacity = 30;
int remainingSeats(int occupied);
int main() {
    int occupiedSeats;
    cin >> occupiedSeats;
    cout << hallCapacity << endl;
    cout << remainingSeats(occupiedSeats) << endl;   
    return 0;
}
int remainingSeats(int occupied) {
    return hallCapacity - occupied;
}
