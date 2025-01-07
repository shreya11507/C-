#include<iostream>
using namespace std;
int main()
{
int a,b,n1,n2,rem;
cout<<"Enter number 1:";
cin>>n1;
cout<<"Enter number 2:";
cin>>n2;
if(n1>n2)
{
a=n1;
b=n2;
}
else
{
a=n2;
b=n1;
}
while(b!=0)
{
rem=a%b;
a=b;
b=rem;
if(rem==0)
{
break;
}
}
cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<a;
return 0;
}
