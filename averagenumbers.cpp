#include<iostream>
int main(){
int n,num;
float sum = 0,average;
cout<<"enter numbers";
cin>>n;
for (int i = 1; i<=n;i++)
cout<<"enter number"<<i<<endl;
cin>>num;
sum = sum + num;
}
average = sum /n;
cout<<"sum"<<sum<<endl;
cout<<"average"<<average<<endl;
}
return 0;
}