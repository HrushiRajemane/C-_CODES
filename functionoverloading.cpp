// function overloading

#include<iostream>
using namespace std;
int add(int,int);
int add(int,int,int);
float add(int,float);
int main()
{
   add(4,5);
   add(4,6,7);
   add (4,2.5f);

}
int add(int a,int b)
{
  int c;
  c=a+b;
  cout<<"\n"<<c;
  
  return c;
}
int add(int a,int b,int c)
{
    int d;
    d=a+b+c;
    cout<<"\n"<<d;
     
     return d;
}
 float add(int a,float b)
 {
    float c;
    c=a+b;
    cout<<"\n"<<c;
     return c;
 }