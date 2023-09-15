// armstrong number

#include<iostream>
using namespace std;
int main()
{
   int r,num,sum=0,temp;
   cout<<"\n Enter the number ";
   cin>>num;
   temp=num;
   while (num !=0)
   {
       r=num%10;
       sum=sum+r*r*r;
       num=num/10;
   }
   if (sum == temp)
   {
      cout<<"\n its a armstrong ";
   }
   else
   
     cout<<"\n it is not armstrong ";


}