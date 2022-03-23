#include<stdio.h>
#include<math.h>

void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the points\n");
  scanf("%f %f ",x1,y1);
  scanf("%f %f",x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
  *distance=sqrt(pow((x2-x1),2)*pow((y2-y1),2));
}
void output(float x1, float y1,float x2, float y2, float distance)
{
  printf("the distance between points is %f\n",distance);
}
int main()
{
  int x1,y1,x2,y2,result;
  input(&x1,&y1,&x2,&y2);
  result= find_distance(x1,y1,x2,y2,*result);
  output(x1,y1,x2,y2,result);
  return 0;
}