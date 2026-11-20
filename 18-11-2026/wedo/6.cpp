#include <iostream>
using namespace std;
void addBonus(int* score);
int main() {
    int marks;
    if (cin >> marks) {
        addBonus(&marks);
        cout << marks << endl;
    }
    return 0;
}
void addBonus(int* score){
    *score = *score + 5;
}
