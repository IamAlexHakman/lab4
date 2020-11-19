#include <stdio.h>
#include <math.h>

#define M_PI        3.14159265358979323846
int main()
{
float y=0,x=0,b = M_PI,dx = M_PI/20;
printf("X\t\t\t\t\tY\n");
while (x<=b)
{
y=tan(x);
printf("%f\t%7.2lf\n", x, y);
x+=dx;
}
return 0;
}
