#include <iostream>
using namespace std;
int main() {
    int days[5];
    cout<<"enter numbers:";
    cin>>days;
    for (int i = 0; i < 5; i++) {
        cin >> days[i];
    }
        for (int i = 0; i < 5; i++) {
        cout << days[i] << " ";
    }
    cout << endl;
    return 0;
}
