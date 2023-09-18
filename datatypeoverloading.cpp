//wap to print where the funcction name will print in which you have to display different datatype using function overloading

#include<iostream>
using namespace std;
 int print(int);
 float print(float);
 double print(double);
 int main()
 {
         cout<<"\n Integer "<<(5);
         cout<<"\n Float "<<(5.8f);
         cout<<"\n Double "<<(848383.2f);

}
     int print(int a)
  {
     return a;
  }
     float print(float b)
  {
     return b;
  }
      double print(double c)
  {
     return c;
  }