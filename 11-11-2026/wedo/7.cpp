#include <iostream>
using namespace std;

int main() {
    int pages = 14;
    int capacity = 5;
    int batches = 0;
    while (pages > 0) {
        if (pages >= capacity) {
            pages = pages - capacity;
        } else {
            pages = 0;
        }
        batches++;
        cout << "Pages remaining = " << pages << endl;
    }
    cout << "Batches = " << batches << endl;
    return 0;
}
