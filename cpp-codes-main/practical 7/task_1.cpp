#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter 1 forn the year \n Enter 2 for month \n Enter 3 for the day \n"<<endl;
cin>>n;

switch(n)
{
 case 1:
 cout<<"The year is : 2021"<<endl;
break;

case 2:
cout<<"The month is : october"<<endl;
break;
 
 case 3:
 cout<<"today is : MOnday :Happy Monday"<<endl;
 break;
 
 default :
 cout<<"Invalid Input "<<endl;

}

return 0;
}
