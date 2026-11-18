#include <iostream>
using namespace std;
int perimeter(int side);
int perimeter(int length, int width);
int main() {
    int squareSide, rectLength, rectWidth;
    cin >> squareSide >> rectLength >> rectWidth;
    cout << perimeter(squareSide) << " " << perimeter(rectLength, rectWidth) << endl;
    return 0;
}
int perimeter(int side) {
    return 4 * side;
}
int perimeter(int length, int width) {
    return 2 * (length + width);
}
