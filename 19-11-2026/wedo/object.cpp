#include<iostream>
using namespace std;
struct student{
    int rollno;
    string name;
    int englishmarks;
    int mathsmarks;
    int sciencemarks;
    int total;
    float average;
};
int main(){
    int first_number;
    student nskstudents[14];
    student naveen;
    naveen.rollno = 25;
    naveen.name = "naveen";
    cout<<"rollno of firststudent is:"<<naveen.rollno<<endl;
    cout<<"name of first student is:"<<naveen.name<<endl;
    cout<<"enter english mark:"<<naveen.englishmarks<<endl;
    cout<<"enter maths mark:"<<naveen.mathsmarks<<endl;
    cout<<"enter sciencemarks:"<<naveen.sciencemarks<<endl;
    cout<<"enter total:"<<naveen.total<<endl;
    cout<<"enter averag: "<<naveen.average<<endl;
    return 0;
}