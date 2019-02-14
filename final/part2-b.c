#include <stdio.h>

int main()
{
	int sum=0,j,i;
	for(i=1;i<1000;i++)
	{
		sum=0; 
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0) sum+=j;
		}
		if(sum==i) 
		{
			printf("%d\n",sum);
		}
	}
	return 0;
}