#include <iostream>
using namespace std;
int main(){
    int classroomseatingarrangement[3][3];
    int counter = 1;
    for(int rowindex = 0; rowindex < 3; rowindex++)
    {
        for(int columnindex = 0; columnindex < 3; columnindex++)
        {classroomseatingarrangement[rowindex][columnindex] = counter;
        counter = counter +1;
    }
    }
    for(int rowindex = 0; rowindex < 3; rowindex++){
        for(int columnindex = 0; columnindex < 3; columnindex++){
            cout<<classroomseatingarrangement [rowindex][columnindex];
            cout<<"\t";
        }
        cout<<endl;
    }
}