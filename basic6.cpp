// prime number in c++ using for loop
/*
#include<iostream>
using namespace std;
int main()
{
   int i,j,count=0;
    for (int i = 1; i <=50; i++)
    {
         
    for ( int j=2; j<i; j++)
    {
         
        if (i%j==0)
        {
            count ++;
            break;

        }
    }
        if (count ==0 && i!=1)
        
           cout<<"\n"<<i;
           count=0;
}
}
*/

#include<iostream>
using namespace std;
int main()
{
  int num,i,j,n1,n2,count;
  cout<<"\n Enter the nrange between to get prime number";
  cin>>n1>>n2;

  for ( i =n1; i <=n2; i++)
  {
    count=0;
    for ( j =1 ; j < n2; j++)
    {
        if (i%j==0)
        {
            count ++;
        
        }
        
    }
    if (count==2)
    {
        cout<<"\n"<<i;
    }
    
    
  }
  


}