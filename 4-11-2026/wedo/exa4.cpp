#include <iostream>
using namespace std;
int main() {
    int chocolates = 50, children = 7;
    int eachGets = chocolates / children;
    int leftOver = chocolates % children;
    cout << "Each child gets: " << eachGets << endl;
    cout << "Chocolates left over: " << leftOver;
    return 0;
}
