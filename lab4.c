#include<stdio.h>

void part1();
void part2();
void part3();

int main()
{
	int choice;
	do
	{
		printf("1-number pyramit\n2-star hexagon\n3-draw game\n\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			part1();
		}
		else if(choice==2)
		{
			part2();
		}
		else if(choice==3)
		{
			part3();
		}
		else
		{
			printf("wrong enter!\n\n");
		}
	}while(choice!=1 || choice!=2 || choice!=3);
	return 0;
}

void part1()
{
	int num,i,j,sum,temp,turn=2;
	printf("enter positive number!:");
	scanf("%d",&num);
	if(num==1)
	{
		printf("1=1\n");
	}
	else
	{
		for(i=0;i<num;i++)
		{
			sum=0;
			temp=1;
			if(i==0)
			{
				printf("1=1\n");
			}
			else
			{
				for(j=0;j<turn;j++)
				{
					sum+=temp;	
					if(temp==turn)
					{
						printf("%d=%d\n",temp,sum);
					}
					else
					{		
						printf("%d+",temp);
						temp++;	
					}
				}
				turn++;
			}
		}
	}
	printf("\n");
}

void part2()
{
	int num,star,space,i,j;
	printf("enter side length:");
	scanf("%d",&num);
	star=1;
	space=num-1;
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<space;j++)
		{
			printf(" ");
		}
		for(j=0;j<star;j++)
		{
			printf("*");
		}
		printf("\n");
		space--;
		star+=2;
	}
	for(i=0;i<num;i++)
	{
		for(j=0;j<star;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	space=1;
	star-=2;
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<space;j++)
		{
			printf(" ");
		}
		for(j=0;j<star;j++)
		{
			printf("*");
		}
		printf("\n");
		space++;
		star-=2;
	}	
}

void part3()
{
	int sayi,i,bosluk,temp,k,s,simge,bilinmeyen_sayi;
	srand(time(NULL));
	bilinmeyen_sayi = rand()%5+5;
	for(i=0;i<3;i++)
	{
		printf("Trial %d - Enter throwing distance:",i+1);
		scanf("%d",&sayi);
		if(sayi%2==0)
		{
			temp=1;
			bosluk=sayi-1;
			for(k=0;k<sayi/2;k++)
			{
				for(s=0;s<bosluk;s++)
				{
					printf(" ");
				}
				if(temp!=(sayi*2)+1)
				{
					for(s=0;s<temp;s++)
					{
						if(s==0)
						{
							printf(" /");

						}
						else if(s==temp-1)
						{
							printf(" \\"); 
						}
						else
						{
							printf(" "); 			
						}
					}
				}
				if(k==0)
				{
					printf("\\");
				}				
			printf("\n");
			bosluk--;
			temp+=2;
			}
			if(sayi==bilinmeyen_sayi)
			{
				printf("you hit the target!\n");
			}
			else
			{
				printf("you could not hit the target!\n");
			}			
		}
		else
		{
			temp=1;
			bosluk=sayi/2;
			for(k=0;k<(sayi/2)+1;k++)
			{
				for(s=0;s<bosluk;s++)
				{
					printf(" ");
				}
				if(temp!=(sayi*2)+1)
				{
					for(s=1;s<temp;s++)
					{
						if(s==1)
						{
							printf(" /");

						}
						else if(s==temp-1 && s!=0)
						{
							printf(" \\"); 
						}
						else
						{
							printf(" "); 			
						}
					}
				}
				if(k==0)
				{
					printf(" _");
				}
			printf("\n");
			bosluk--;
			temp+=2;
			}
			if(sayi==bilinmeyen_sayi)
			{
				printf("you hit the target!\n");
			}
			else
			{
				printf("you could not hit the target!\n");
			}						
		}	
	}
}
