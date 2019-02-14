#include<stdio.h>

int LCMGCD(int number1,int number2, int *ekok,int *ebob);
int sumofPrimeCheck(int number,int *temp_number,int *i);
int prime_controller(int number);
int fibonacci(int number,int *y,int *counter);

int main()
{
	int choice;
	do
	{
		printf("enter a number:\n1-ebob - ekok calculator\n2-prime sum program\n3-fibonacci series\n");
		scanf("%d",&choice);
		if(choice==1)
		{	
			int num1,num2,ebob,ekok;
			printf("enter two integer:\n");
			scanf("%d %d",&num1,&num2);
			LCMGCD(num1,num2,&ekok,&ebob);	
			printf("ebob is: %d\n",ebob);
			printf("ekok is: %d\n",ekok);			
		}
		else if(choice==2)
		{
			int number,first,second;
			printf("enter a positive integer:");
			scanf("%d",&number);		
			sumofPrimeCheck(number,&first,&second);			
		}
		else if(choice==3)
		{
			int number,element_of_series,last_element;
			printf("please enter the number:\n");
			scanf("%d",&number);
			fibonacci(number,&last_element,&element_of_series);
			printf("%d elemanli serinin son elemani %d'dir.\n",element_of_series,last_element);	
		}
		else if(choice==0)
		{
			break;
		}
		else
		{
			printf("wrong enter!");
		}		
	}while(choice!=1 || choice!=2 || choice !=3);

	return 0;
}

int LCMGCD(int number1,int number2, int *ekok,int *ebob)
{
	int x=1,temp1,temp2,i;
	temp1=number1;
	temp2=number2;
	*ebob=1;	
	*ekok=1;
	/* ebob */
	if(number1==1 || number2==1)
	{
		*ebob=1;
	}
	else if(number1==number2)
	{
		*ebob=number1;
	}	
	else
	{
		for(i=2;i<=number1;i++)
		{
			while(number1 % i == 0 && number2 % i == 0)
			{
				number1/=i;
				number2/=i;
				*ebob*=i;
			}		
		}
	}
	/* ebob */
	/* ekok */
	if(temp1==1 && (temp1<temp2))
	{
		*ekok=temp2;
	}
	else if(temp2==1 && (temp2<temp1))
	{
		*ekok=temp1;
	}
	else if(temp1==temp2)
	{
		*ekok=temp1;
	}
	else
	{
		if(temp1<temp2)
		{
			for(i=2;i<=temp1;i++)
			{
			if(temp1 % i == 0 && temp2 % i == 0)
			{
				x*=i;
			}						
			}
			*ekok=(temp1*temp2)/x;		
		}
		else
		{
			for(i=2;i<=temp2;i++)
			{
				if(temp1 % i == 0 && temp2 % i == 0)
				{
					x=i;
				}						
			}
			*ekok=(temp1*temp2)/x;			
		}
	}
	/* ekok */
}

int sumofPrimeCheck(int number,int *temp_number,int *i)
{
	int j,M,a,b,temp;
	*temp_number = number;
	for(*i=2;*i<=*temp_number;*i++)
	{
		*temp_number = number - *i;
		if(prime_controller(*temp_number) == 1 && prime_controller(*i) == 1)
		{
			printf("%d = %d + %d\n", number, *temp_number, *i);	
		}
	}						
}		

int prime_controller(int number)
{
	int i,M;
	for(i=2;i<=number / 2;i++)
	{
		M=1;
		if(number % i == 0)
		{
			M=0;
			break;
		}	
	}
	if(M!=0)
	{
		return 1;
	}		
}

int fibonacci(int number,int *y,int *counter)
{
	int x=1,i,j,temp_y;
	*y=1;
	*counter=3;
	printf("%d, %d, %d, ",x-1,x,*y);	
	for(i=1;i<number;i++)
	{
		temp_y=*y;
		*y+=x;
		x=x+(temp_y-x);
		if(number<*y)
		{
			*y=x-(temp_y-x);					
			i=number;
		}	
		else
		{
			printf("%d, ",*y);
			*counter+=1;			
		}
	}
	printf("\n");
}
