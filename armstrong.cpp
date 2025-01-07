#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int num,int n)
{
int sum=0,rem;
while(num!=0)
{
rem=num%10;
sum+=pow(rem,n);
num=num/10;
}
return sum;
}
int main()
{
int num,n=0,org,r;
cout<<"Enter a number:";
cin>>num;
org=num;
while(num!=0)
{
num=num/10;
n++;
}
num=org;
r=armstrong(num,n);
cout<<r;
if(r==org)
cout<<org<<" is a armstrong number";
else
cout<<org<<" is not a armstrong number";
return 0;
}
