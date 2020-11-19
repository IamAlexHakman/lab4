#include <stdio.h>
#include <math.h>

int main()

{
    int x,y,z,er=0;
    float t;
do
{
        printf("число y = ");
        scanf("%d",&y);
        printf("число z = ");
        scanf("%d",&z);
        t=sqrt(3*(y/z-2*y)-y*z);
        if(z-2*y==0)
        {
          er=1;
          printf("\nділення на нуль\n");
        }
        else if(3*(y/z-2*y)<0)
        {
          er=1;
          printf("\nКорінь з від'ємного числа взяти не можна\n");
        }
}
while(er==1);
          printf("%f\n",t);
        }