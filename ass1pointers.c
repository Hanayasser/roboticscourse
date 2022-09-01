#include <stdio.h>

void main(void)
{
int x = 5,y = 6,z = 7;

int * p;
p = &x;
int * q;
q = &y;
int * r;
r = &z;

printf(" x = %d\n",x);
printf(" y = %d\n",y);
printf(" z = %d\n",z);
printf(" p = %d\n",*p);
printf(" q = %d\n",*q);
printf(" r = %d\n", *r);

printf("swapping pointers\n");
int temp = *r;
*r =*p+*q;
*p=*r-*p;
*r=*r-*q;
*q=temp;


printf(" x = %d\n",x);
printf(" y = %d\n",y);
printf(" z = %d\n",z);
printf(" p = %d\n",*p);
printf(" q = %d\n",*q);
printf(" r = %d\n",*r);




}