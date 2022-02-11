#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter Base and Height\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("the Area of Triangle with BASE %f and HEIGHT %f is %f\n ",base,height,area);
}
int main()
{
  float base , height;
  input(&base,&height);
  float area;
  find_area(base, height, &area);
  output(base, height, area);
  return 0;

}

