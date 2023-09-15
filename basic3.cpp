//factorial number in cpp

#include<iostream>
using namespace std;

int main()
{
    int i,fact=1,num;
    cout<<"\n enter any number: ";
    cin>>num;
    for ( i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    cout<<"\n the factorial is " <<fact;


}