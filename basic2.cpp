// swapping of two numbers 

#include<iostream>
using namespace std;
int main()
{
     int a,b;
     cout<<"\n Enter any  number";
     cin>>a>>b;
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<"\n the swappe number is a=" << a <<" and b="<< b;



}