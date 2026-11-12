#include <iostream>
using name std;
int main(){
int lockers[5] = {14,27,31,27,42};
int indexofarray = 0;
bool flag = true;
for (indexofarray = 0; indexofarray<5; indexofarray++)
{
    if(lockers[indexofarray] == 27)
    {
        std::cout<<"found"<<std::endl;
        flag = false;
        break;
    }
}
std::cout<<"not found"<<std::endl;
