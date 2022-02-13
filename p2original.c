#include<stdio.h>
int input_side()
{
  int a;
  printf(" enter the values of sides of triangle\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b && a!=c)
return a;
else if(b!=c)
return b;
else
return c;
}
void output(int a, int b, int c, int isscalene)
{
  printf("%d is scalene triangle\n",isscalene);
}
int main()
{
  int a;
  input_side(); 
  check_scalene(a, b, c);
  output(a, b, c, isscalene);
  return 0;
}
