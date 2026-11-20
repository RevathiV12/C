
#include <iostream>
using namespace std;
int main()
{
    int score;
    cin >> score;
    int *ptr = &score;
    cout << *ptr << endl;
    if (ptr == &score)
    {
        cout << "Same address" << endl;
    }
    return 0;
}
