#include <stdio.h>

void ahmed();
void amr();
void wael();
int ID,ps,D=0;

void main(void)
{
	 while(D == 0)
	 {
		 printf("please enter your ID: ");
		 scanf("%d",&ID);
		 switch(ID)
		 {
			 case(1234):
			 
			 ahmed();
			 break;
			 
			 case(5678):
			 
			 amr();
			 break;
			 
			 case(9870):
			 
			 wael();
			 break;
			 
			 default:
			 printf("wrong ID,try again \n");
			 
			 
			 
		 }
		 
		 
	 }
	
	
}

  void ahmed()

  {
	  printf("please enter your password: ");
	  scanf(" %d",&ps);
	  if(ps == 7788)
	  {
		  printf("welcome ahmed");
		  D = 1;
		  
	  }
	  else
	  {
		  for(int i =0;i<2;i++)
		  {
			  printf("wrong password , please try again:");
			  scanf(" %d",&ps);
			  if(ps == 7788)
			  {
				  
				  printf("welcome ahmed");
				  D = 1;
				  break;
				  
				  
			  }
			  
			  
			  
		  }
		  if(D == 0)
		  {
			  
			  printf("incorrect password for 3 times,no more tries \n");
			  D = 1;
		  }
		  
	  }
	  
  }  
	
	void amr()
	{
		printf("please enter your password: ");
		scanf(" %d",&ps);
		if(ps == 5566)
		{
			printf("welcome amr");
			D = 1;
			
			
		}
		else
		{
			for(int i = 0;i<2;i++)
			{
				printf("wrong password,please try again: ");
				scanf(" %d",&ps);
				if(ps == 5566)
				{
					printf("welcome amr");
					D = 1;
					break;
					
				}
				
				
				
			}
			if(D == 0)
			{
				
				printf("incorrect password for 3 times,no more tries \n");
				D = 1;
			}
			
		}
		
		
	}
	
	void wael()
	{
		printf("please enter your password: ");
		scanf(" %d",&ps);
		if(ps == 1122)
		{
			
			printf("welcome wael");
			D = 1;
		}
		else
		{
			for(int i = 0;i<2;i++)
			{
				
				printf("wrong password ,please try again: ");
				scanf(" %d",&ps);
				if(ps == 1122)
				{
					printf("welcome wael");
					D = 1;
					break;
					
				}
			}
			
			
		}
		
		
	}
	
  
  
  
  
  
  
  
