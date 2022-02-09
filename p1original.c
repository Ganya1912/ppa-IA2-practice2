#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the values of a,b\n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=1/2*base*height;
}
void output(float base,float height,float area)
{
  printf("area of triangle is %f\n",area);
}
int main()
{
  float a,b,area;
  input(&a,&b);
  find_area(a,b,&area);
  output(a,b,area);
  return 0;
}
