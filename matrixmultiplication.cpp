#include<iostream>
using namespace std;
int main()
{
int i,j,mat1[3][3],mat2[3][3],result[3][3]={0};
cout<<"Enter elements of first matrix:";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"\nEnter element:";
cin>>mat1[i][j];
}
}
cout<<"\nEnter elements of second matrix:";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<"\nEnter element:";
cin>>mat2[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(int k=0;k<3;k++)
{
 result[i][j]+=mat1[i][k]*mat2[k][j];
}
}
}
cout<<"\nResult of matrix multiplication:\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<result[i][j];
}
printf("\n");
}
return 0;
}


