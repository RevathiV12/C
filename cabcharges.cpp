#include<iostream>
using namespace std;
int main()
{
    int cab_charges = 50;
    int plus_charges = 12;
    int perkm = 15;
    int fare = (plus_charges+perkm)*cab_charges ;
    cout<<"the fare is"<<fare<<"rupees"<<endl;
    return 0;
}
