#include<iostream>
using namespace std;
int main()
{
int f1=0,f2=1,f3,n;
cout<<"Enter number of terms:";
cin>>n;
for(int i=1;i<=n;i++)
{
f1=0;
f2=1;
cout<<f2<<" ";
for(int j=1;j<i;j++)
{
f3=f1+f2;
cout<<f3<<" ";
f1=f2;
f2=f3;
}
cout<<"\n";
}
return 0;
}
