#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
{
printf("enter coordinates of a point\");
scanf("%df%f"x1,y1);
  printf("enter coordinates of another point\");
scanf("%df%f",x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *area);
{
  distance=sqrt(x2-x1)(x2-x1)+(y2-y1)*(y2-y1);
}
void output(float x1, float y1,float x2, float y2, float area);
{
printf("the distance between (%f,%f) and (%f,%f)is %f",x1,x2,y1,y2,distance);
}
int main 
{
  float x1,y1,x2,y2
  input(&x1,&y1,&x2,&y2);
  find distance(x1,x2,y1,y2,distance);
output(x1,x2,y1,y2,distance);
  return0;
  }
