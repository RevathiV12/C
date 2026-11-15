#include <iostream>
using namespace std;

int main() {
    int limit = 35;
    int matches = 0;
    for (int num = 10; num <= limit; num++) {
        int last = num % 10;
        int first = num;
        while (first >= 10) {
            first = first / 10;
        }
        bool isMatch = (first == last);
        if (isMatch) {
            cout << num << endl;
            matches++;
        }
    }
    cout << "Matches = " << matches << endl;
    return 0;
}
