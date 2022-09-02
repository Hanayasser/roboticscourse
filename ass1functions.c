#include <stdio.h>

int max (int x, int y);

int min (int a, int b);

void main()
{
int num1,num2,num3,num4;

printf("please enter number 1 :");
scanf("%d",&num1);

printf("please enter number 2 :");
scanf("%d",&num2);

printf("please enter number 3 :");
scanf("%d",&num3);

printf("please enter number 4 :");
scanf("%d",&num4);

int max1 = max(num1,num2);
int max2 = max(num3,num4);
int max3 = max(max1,max2);

int min1 = min(num1,num2);
int min2 = min(num3,num4);
int min3 = min(min1,min2);

printf("the maximum number is %d\n",max3);
printf("the minimum number is %d",min3);

}

int max (int x, int y)
{
int h;
if (x>y)

{
   h=x;
}
   
else
{
   h=y;
}
return h;
}

int min (int a, int b)
{
int z;
if (a>b)
{
    z=b;
}
else 
{
    z=a;
}
return z;
}

