#include <stdio.h>
#include <math.h>

int main()

{
    int s=0,k;   
for(int i=1; i<=25; i++)
{
    if (i % 5 == 0)
    s+=i;
    k=pow(s,3);
}
printf("Куб суми = %d",k);
}