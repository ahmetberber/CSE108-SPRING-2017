#include <stdio.h>
 
int lcm(int x, int y, int largest);
int count_of_vowels(const char *text,size_t vowels_count);

int main() 
{
	/*PART1*/
	/*int num1,num2;
    printf("Enter two integer numbers for calculate LCM of numbers:\n");
    scanf("%d %d",&num1,&num2);
    printf("LCM of %d and %d is %d\n",num1,num2,lcm(num1,num2,1));*/
    /*PART2*/
    char array[] = {"ahmet hilmi berber"};
    int x = count_of_vowels(array,0);
    printf("Number of Vowels = %d\n",x);
    return 0;
}
 
int lcm(int x, int y, int largest) 
{
	if(largest % x == 0 && largest % y == 0)
	{
		return largest;
	}
 	largest++;
	lcm(x,y,largest);
}

int count_of_vowels(const char *text,size_t vowels_count)
{
	if(text[0]=='\0')
	{
		vowels_count=0;
	}
	else
	{
		if('a'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}
		else if('A'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}
		else if('e'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}	
		else if('E'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}	
		else if('i'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}
		else if('I'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}	
		else if('o'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}
		else if('O'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}	
		else if('u'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}
		else if('U'==text[0])
		{
			vowels_count = 1 + count_of_vowels(&text[1],vowels_count);
		}		
		else
		{
			vowels_count = count_of_vowels(&text[1],vowels_count);
		}
	}	
	return vowels_count;	
}
