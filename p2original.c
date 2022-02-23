#include <stdio.h>
#include <math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
{
  printf("enter the vertices of the triangle");
  scanf("%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
{
  float a=x1 (y2-y3)+x2(y3-y1)+x3(y1-y2)*0.5;
  return fabs(a)>0.00001;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int is triangle)
{
  printf("the points (%f,%f),(%f,%f) and (%f,%f) is a triangle\n",x1,y1,x2,y2,x3,y3);
}
int main 
{
  float x1,y1,x2,y2,x3,y3;
  int ist;
  input(&x1,&x2,&x3,&y1,&y2,&y3);
  ist is_triangle(x1,y1,x2,y2,x3,y3);
  output (x1,y1,x2,y2,x3,y3,ist);
  return0;
}