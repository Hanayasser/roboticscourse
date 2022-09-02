#include <stdio.h>

void main(void)
{
int arr[10];


     for (int i=0;i<=10-1;i++)
	 {
	 printf("please enter number %d : \n",i+1);
	 scanf(" %d",&arr[i]);
	 }

	 int max=arr[0];
	 int min=arr[0];
	 
	 for (int i=1;i<=10-1;i++)
	 {
	      if (arr[i]>max)
		  {
		  max=arr[i];
		  }
		  
		  if (arr[i]<min)
		  {
		  min=arr[i];
		  }
	 
	 }
	 printf("the maximum is %d\n",max);
	 printf("the minimum is %d",min);

	



}