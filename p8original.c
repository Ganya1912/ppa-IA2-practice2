#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle
int input_n()
{
  int a;
  printf("how many triangles do you enter");
  scanf("%d",&a);
  return a;
}
Triangle input_triangle()
{
  Triangle t;
  printf("enter the values for base and height\n");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}

void input_n_triangles(int n, triangle t[n])
{
  for(int i=0;i<n;i++)
    {
     t[i]= input_triangle();
    } 
}
void find_area(Triangle *t)
{
  t->area = 0.5 *(t->base * t->altitude);
}
void find_areas_n(int n, Triangle t[n])
{
  for (int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
 for(int i=0;i<n;i++)
   {
  if(small.area > t[1].area);
     small.area = t[1].area;
    }
}











int main()
{
  int n;
  n = input_n();
  Triangle t[n];
  input_n_triangles(int n, triangle (n , t));
  find_areas_n(int n, Triangle t[n])
}