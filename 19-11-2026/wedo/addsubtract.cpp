#include <iostream>
using namespace std;
int main()
{
    int row[2][2] = {{1, 2}, {3, 4}};
    int column[2][2] = {{5, 6}, {7, 8}};
    cout << "addition" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << row[i][j] + column[i][j] << " ";
        }
        cout << endl; 
    }

{
    int row[2][2] = {{1, 2}, {3, 4}};
    int column[2][2] = {{5, 6}, {7, 8}};
    
    cout << "subtraction" << endl;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << row[i][j] - column[i][j] << " ";
        }
        cout << endl; 
    }
    
    return 0;
}

}
