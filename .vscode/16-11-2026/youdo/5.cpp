#include <iostream>
using namespace std;
double areaOfTriangle(double base, double height) {
    double area = 0.5 * base * height;
    return area;
}
int main() {
    double b, h;
    cin >> b >> h;
    cout << areaOfTriangle(b, h);
    return 0;
}
