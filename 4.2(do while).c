#include <stdio.h>
#include <math.h>

int main()

{
    int i=1,k,s=0;   
do
{
    if (i % 5 == 0)
    s+=i;
    k=pow(s,3);
    i++;
}while(i<=25);
printf("Куб суми=%d",k);
}