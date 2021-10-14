/*
printing by reverse order
*/

#include<iostream>
using namespace std;
int main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int ans[3][3];
int n=3;
for(int  i=n-1;i>=0;i--)
{
for(int  j=n-1;j>=0;j--)
{
b[i][j]=a[i][j];
}
cout<<endl;
}
for(int i=0;i<n;i++)
{
for(intj=0;j<n;j++)
{
cout<<b[i][j]<<" ";
}
cout<<endl;
}
return 0;
}

   
