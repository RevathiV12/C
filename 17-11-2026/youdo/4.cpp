#include <iostream>
using namespace std;
int area(int side);
int area(int length, int width);
int main() {
    int squareSide, rectLength, rectWidth;
    cin >> squareSide >> rectLength >> rectWidth;
    cout << area(squareSide) << " " << area(rectLength, rectWidth) << endl;   
    return 0;
}
int area(int side) {
    return side * side;
}
int area(int length, int width) {
    return length * width;
}
