#include <iostream>
using namespace std;
int parcelCharge(int parcels);
int parcelCharge(int parcels, int fee);
int main() {
    int parcelCount, handlingFee;
    cin >> parcelCount >> handlingFee;
    cout << parcelCharge(parcelCount) << " " << parcelCharge(parcelCount, handlingFee) << endl;
    return 0;
}
int parcelCharge(int parcels) {
    return parcels * 10;
}
int parcelCharge(int parcels, int fee) {
    return (parcels * 10) + fee;
}
