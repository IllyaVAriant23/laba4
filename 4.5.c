#include <stdio.h>
#include <math.h>

int main()
{
float y = 0, x, b, dx;
double PI = 3.141592653589793238;
x = -PI / 2;
b = -(3 * PI) / 2;
dx = PI / 10;
printf("X\t\t\t\tY\n");
  if(b<x){
printf("Нам нічого не видає бо число b менше числа x і нема інтервала");
  }
  else{
   while (x<=b){
  y = pow(x, 2) * cos(x);
  printf("%f\t\t%f\n", x, y);
  x += dx;
} 
  }
  return 0;
