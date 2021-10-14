
/*
printing by reverse order
*/

#include<iostream>
using namespace std;
int main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

int n=3;
for(int  i=n-1;i>=0;i--)
{
for(int  j=n-1;j>=0;j--)
{
cout<<a[i][j]<<" ";
}
cout<<endl;
}

return 0;
}
