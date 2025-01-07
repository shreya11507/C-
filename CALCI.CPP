#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter operation:";
cin>>ch;
int n1,n2;
cout<<"Enter number1:";
cin>>n1;
cout<<"Enter number2:";
cin>>n2;
switch(ch)
{
case '+':
cout<<"Sum:"<<n1+n2;
break;
case '-':
cout<<"Difference:"<<n1-n2;
break;
case'*':
cout<<"Product:"<<n1*n2;
break;
case'/':
cout<<"Division:"<<n1/n2;
break;
default:
cout<<"Invalid input try again";
}
return 0;
}
