#include<iostream>
using namespace std;
int main()
{
int rem,n;
cout<<"Enter a number:";
cin>>n;
cout<<"Number after interchanging:";
while(n!=0)
{
rem=n%10;
n=n/10;
cout<<rem;
}
return 0;
}
