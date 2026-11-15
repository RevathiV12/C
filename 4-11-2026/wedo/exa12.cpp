#include <iostream>
using namespace std;
int main() {
    int totalEggs = 275, trayCapacity = 30;
    int fullTrays = totalEggs / trayCapacity;
    int eggsLeft = totalEggs % trayCapacity;
    cout << "Full trays: " << fullTrays << endl;
    cout << "Eggs left over: " << eggsLeft;
    return 0;
}
