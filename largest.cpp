#include<iostream>
using namespace std;
int main()
{
int a,b,c,r;
cout<<"Enter number 1:";
cin>>a;
cout<<"Enter number 2:";
cin>>b;
cout<<"Enter number 3:";
cin>>c;
r=(a>b)?((a>c)?a:c):((b>c)?b:c);
cout<<"Largest of three numbers is "<<r;
return 0;
}
