#include <iostream>
using namespace std;
double triangleArea(double base, double height) {
    double area = 0.5 * base * height;
    return area;
}
int main() {
    double b, h;
    cin >> b >> h;
    double result = triangleArea(b, h);
    cout << result;
    return 0;
}
