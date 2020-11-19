#include <stdio.h>
#include <math.h>

int main()
{
int j, i, s,x;
float n, p = 0;
printf("Введіть натуральне число n = ");
scanf("%f",&n);
printf("Введіть ціле число x = ");
scanf("%d",&x);
for(int i = 1; i <= n; i++)  
 {
  for (s = 1, j = 1;j <= i; j++) 
  s *= j/x; 
 p += s;
 } 
 printf("p=%f\n",p);
} 
