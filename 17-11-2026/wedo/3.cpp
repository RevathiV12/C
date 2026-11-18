#include <iostream>
using namespace std;
void printOrder(int items);
int main() {
    int itemCount;
    cin >> itemCount;
    printOrder(itemCount);   
    return 0;
}
void printOrder(int items) {
    if (items >= 10) {
        int extraBoxes = 1; 
        cout << extraBoxes << endl;
    } 
    cout << items << endl;
}
