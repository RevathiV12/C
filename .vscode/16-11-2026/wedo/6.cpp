#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double area;
    cout << "Enter the area of the square tile: ";
    cin >> area;
    double sideLength = std::sqrt(area);
    cout << "Side length: " << sideLength << endl;
    return 0;
}
