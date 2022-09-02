#include <stdio.h>

void main(void)
{
int arr1[10];
int arr2[10];
int arr3[10];
int pass;
int fail;
int max = 0;
int min = arr1[2];
int avg;
int p=0,f=0;

     for ( int i=0;i<=10 - 1;i++)
	 {
	 printf("please enter grades in class 1_%d : ",i+1);
	 scanf(" %d",&arr1[i]);
	 
	 if (arr1[i] >= 50)
	 {
		 p++;
	 }
	 else
	 {
		 f++;
	 }
	 
	 printf("please enter grades in class 2_%d : ",i+1);
	 scanf(" %d",&arr2[i]);
	 
	 if (arr2[i] >= 50)
	 {
		 p++;
	 }
	 else
	 {
		 f++;
	 }
	 
	 printf("please enter grades in class 3_%d : ",i+1);
	 scanf(" %d",&arr3[i]);
	 
	 if (arr3[i] >= 50)
	 {
		 p++;
	 }
	 else
	 {
		 f++;
	 }
	 
	 if (max < arr1[i])
	 {
		 max = arr1[i];
	 }
	 if(max < arr2[i])
	 {
		 max = arr2[i];
	 }
	 if ( max < arr3[i])
	 {
		 max = arr3[i];
	 }
	 if (min > arr1[i])
	 {
		 min = arr1[i];
	 }
	 if ( min > arr2[i])
	 {
		 min = arr2[i];
	 }
	 if ( min > arr3[i])
	 {
		 min = arr3[i];
	 }
	 }
    avg=(max+min)/2;
 
 printf (" number of passed students is %d\n",p);
 printf("number of failed students is %d\n",f);
 printf("the highest grade is %d\n",max);
 printf("the lowest grade is %d\n",min);
 printf("the average grade is %d",avg);
}