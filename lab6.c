#include<stdio.h>

typedef enum{monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6,sunday=7}days;
int min_day_to_reach(int cultural_point);
int any_activity_point(int day_count);

int main()
{
	int day = min_day_to_reach(51);
	printf("Mehemt can obtain 51 cultural points at least %d days.\n",day);
	
	
	return 0;
}

int min_day_to_reach(int cultural_point)
{
	int mehmet = 0, period=5, counter=0;
	while(cultural_point>0)
	{
		mehmet+=period;
		if(mehmet%35==0)/* tiyatroya gittiði zaman */
		{
			cultural_point-=3;
		}
		else if(mehmet%10==0)/* konsere gittiði zaman */
		{
			cultural_point-=2;
		}
		else if(mehmet%10==5)/* sinemaya gittiði zaman */
		{
			cultural_point--;
		}
		counter+=period;
	}
	return counter;
}

int any_activity_point(int day_count)
{
	
	
}
