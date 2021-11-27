#include <iostream>
using namespace std;

int main ()  {
float a,b,c,d,total,average;

   cout<<"Input first two numbers (separated by pace): ";
      cin>>a >>b;
   cout<<"Input last two numbers (separated by space): ";
      cin>>c >>d;
total= a+b+c+d;
average= (a+b+c+d)/4;
   cout<<" The total of four number is: "<<total <<endl;
   cout<<" The average of four number is: "<<average <<endl;

return 0;
}
