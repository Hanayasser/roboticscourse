#include <stdio.h>

int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
float div(float x,float y);
int reminder(int x,int y);
int increment(int x);
int decrement(int x);

void main(void)
{
   int OPID;
   printf("please enter the operation ID from 1 to 7 : ");
   scanf(" %d",&OPID);
   int x,y,A,S,M,R,I,DE;
   float D;
   
   
   
   switch(OPID)
   {
   case(1):
    A = add(x,y);
   break;
   case(2):
   S = sub(x,y);
   break;
   case(3):
   M = mul(x,y);
   break;
   case(4):
   D = div(x,y);
   break;
   case(5):
   R = reminder (x,y);
   break;
   case(6):
   I = increment(x);
   break;
   case(7):
   DE = decrement(x);
   break;
   default:
   printf("incorrect operation ID");
   }

}
  
  
int add(int x,int y)
{
printf("please enter the first operand : \n");
scanf(" %d",&x);
printf("please enter the second opearnd : \n");
scanf(" %d",&y);
int sum = x+y;
printf("the result is %d",sum);
return sum;

}  

int sub(int x,int y)
{
printf("please enter the first operand : \n");
scanf(" %d",&x);
printf("please enter the second operand : \n");
scanf(" %d",&y);
int sub = x-y;
printf("the result is %d",sub);
return sub;
}

int mul(int x,int y)
{
printf("please enter the first operand : \n");
scanf(" %d",&x);
printf("please enter the second operand : \n");
scanf(" %d",&y);
int mul = x*y;
printf("the result is %d",mul);
return mul;
}

float div(float x,float y)
{
printf("please enter the first operand : \n");
scanf(" %f",&x);
printf("please enter the second operand : \n");
scanf(" %f",&y);
float dv = x/y;
printf("the result is %f",dv);
return dv;
}

int reminder(int x,int y)
{
printf("please enter the first operand : \n");
scanf(" %d",&x);
printf("please enter the second operand : \n");
scanf(" %d",&y);
int reminder = x%y;
printf("the result is %d",reminder);
return reminder;
}

int increment(int x)
{
printf("please enter the operand : \n");
scanf(" %d",&x);
int inc = x++;
printf("the result is %d",inc);
return inc;
}

int decrement(int x)
{
printf("please enter the operand : \n");
scanf(" %d",&x);
int dec = x--;
printf("the result is %d",dec);
return dec;

}
