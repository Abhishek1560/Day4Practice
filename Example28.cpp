#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

int main ()   {
 float S1, S2, ang1, area;

 cout<< "Input the length of a side of the triangle: ";
  cin>> S1;
 cout<< "Input the length of another side of the triangle: ";
  cin>> S2;
 cout<< "Input the angle between these sides of the triangle:";
  cin>> ang1;
 area= (S1 * S1 * sin((PI/180)*ang1))/2;
 cout<< "The area of the Scalene Triangle is: "<<area <<endl;

 return 0;
 }
