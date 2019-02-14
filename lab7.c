#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef enum{WALL,SPACE,START,FINISH}operands;
void init_maze01(operands maze1[][8]);
void init_maze02(operands maze2[][10]);
void show_maze1(operands array[][8],int size_x,int size_y);
void show_maze2(operands array[][10],int size_x,int size_y);
void move(operands maze[][10], int pos_x, int pos_y);
void move_test(int maze[][10], int pos_x, int pos_y, int direction);

int main()
{
	srand(time(NULL));
	operands arr1[8][8],arr2[10][10];
	init_maze01(arr1);
	init_maze02(arr2);
	show_maze1(arr1,8,8);
	printf("\n\n");
	show_maze2(arr2,10,10);
	move(arr1,3,3);
	return 0;
}

void init_maze01(operands maze1[][8])
{
	maze1[0][0]=WALL;
	maze1[0][1]=WALL;
	maze1[0][2]=WALL;
	maze1[0][3]=WALL;
	maze1[0][4]=WALL;
	maze1[0][5]=WALL;
	maze1[0][6]=FINISH;
	maze1[0][7]=SPACE;	
	maze1[1][0]=WALL;
	maze1[1][1]=SPACE;
	maze1[1][2]=SPACE;
	maze1[1][3]=SPACE;
	maze1[1][4]=WALL;	
	maze1[1][5]=SPACE;
	maze1[1][6]=SPACE;
	maze1[1][7]=WALL;		
	maze1[2][0]=WALL;
	maze1[2][1]=SPACE;	
	maze1[2][2]=WALL;	
	maze1[2][3]=SPACE;
	maze1[2][4]=WALL;
	maze1[2][5]=SPACE;
	maze1[2][6]=SPACE;	
	maze1[2][7]=WALL;						
	maze1[3][0]=WALL;
	maze1[3][1]=SPACE;		
	maze1[3][2]=WALL;	
	maze1[3][3]=START;	
	maze1[3][4]=WALL;
	maze1[3][5]=SPACE;
	maze1[3][6]=SPACE;	
	maze1[3][7]=WALL;				
	maze1[4][0]=WALL;
	maze1[4][1]=SPACE;
	maze1[4][2]=WALL;	
	maze1[4][3]=SPACE;
	maze1[4][4]=SPACE;
	maze1[4][5]=WALL;	
	maze1[4][6]=SPACE;	
	maze1[4][7]=WALL;						
	maze1[5][0]=WALL;
	maze1[5][1]=SPACE;
	maze1[5][2]=WALL;
	maze1[5][3]=WALL;
	maze1[5][4]=SPACE;
	maze1[5][5]=WALL;	
	maze1[5][6]=SPACE;	
	maze1[5][7]=WALL;	
	maze1[6][0]=WALL;
	maze1[6][1]=SPACE;
	maze1[6][2]=SPACE;	
	maze1[6][3]=SPACE;	
	maze1[6][4]=SPACE;	
	maze1[6][5]=SPACE;	
	maze1[6][6]=SPACE;	
	maze1[6][7]=WALL;		
	maze1[7][0]=WALL;		
	maze1[7][1]=WALL;		
	maze1[7][2]=WALL;		
	maze1[7][3]=WALL;		
	maze1[7][4]=WALL;		
	maze1[7][5]=WALL;		
	maze1[7][6]=WALL;		
	maze1[7][7]=WALL;
}

void init_maze02(operands maze2[][10])
{
	maze2[0][0]=WALL;
	maze2[0][1]=WALL;
	maze2[0][2]=WALL;
	maze2[0][3]=WALL;
	maze2[0][4]=WALL;
	maze2[0][5]=WALL;
	maze2[0][6]=WALL;
	maze2[0][7]=WALL;
	maze2[0][8]=WALL;
	maze2[0][9]=WALL;
	maze2[1][0]=WALL;
	maze2[1][1]=START;
	maze2[1][2]=WALL;		
	maze2[1][3]=SPACE;	
	maze2[1][4]=SPACE;
	maze2[1][5]=SPACE;		
	maze2[1][6]=WALL;	
	maze2[1][7]=SPACE;
	maze2[1][8]=SPACE;
	maze2[1][9]=WALL;	
	maze2[2][0]=WALL;	
	maze2[2][1]=SPACE;
	maze2[2][2]=WALL;
	maze2[2][3]=SPACE;
	maze2[2][4]=WALL;
	maze2[2][5]=SPACE;
	maze2[2][6]=WALL;
	maze2[2][7]=SPACE;
	maze2[2][8]=WALL;
	maze2[2][9]=WALL;
	maze2[3][0]=WALL;
	maze2[3][1]=SPACE;
	maze2[3][2]=SPACE;
	maze2[3][3]=SPACE;
	maze2[3][4]=WALL;
	maze2[3][5]=SPACE;
	maze2[3][6]=WALL;
	maze2[3][7]=SPACE;
	maze2[3][8]=SPACE;
	maze2[3][9]=WALL;
	maze2[4][0]=WALL;
	maze2[4][1]=SPACE;	
	maze2[4][2]=WALL;
	maze2[4][3]=SPACE;		
	maze2[4][4]=WALL;
	maze2[4][5]=SPACE;
	maze2[4][6]=SPACE;
	maze2[4][7]=SPACE;
	maze2[4][8]=SPACE;	
	maze2[4][9]=WALL;
	maze2[5][0]=WALL;
	maze2[5][1]=SPACE;
	maze2[5][2]=WALL;
	maze2[5][3]=SPACE;
	maze2[5][4]=WALL;
	maze2[5][5]=WALL;
	maze2[5][6]=SPACE;
	maze2[5][7]=WALL;
	maze2[5][8]=SPACE;
	maze2[5][9]=WALL;
	maze2[6][0]=WALL;
	maze2[6][1]=SPACE;
	maze2[6][2]=WALL;
	maze2[6][3]=SPACE;
	maze2[6][4]=SPACE;
	maze2[6][5]=WALL;
	maze2[6][6]=SPACE;
	maze2[6][7]=WALL;
	maze2[6][8]=SPACE;
	maze2[6][9]=FINISH;	
	maze2[7][0]=WALL;	
	maze2[7][1]=SPACE;	
	maze2[7][2]=WALL;	
	maze2[7][3]=WALL;	
	maze2[7][4]=SPACE;	
	maze2[7][5]=WALL;	
	maze2[7][6]=WALL;	
	maze2[7][7]=WALL;	
	maze2[7][8]=SPACE;	
	maze2[7][9]=WALL;
	maze2[8][0]=WALL;
	maze2[8][1]=SPACE;
	maze2[8][2]=SPACE;
	maze2[8][3]=WALL;
	maze2[8][4]=SPACE;
	maze2[8][5]=SPACE;
	maze2[8][6]=SPACE;
	maze2[8][7]=SPACE;
	maze2[8][8]=SPACE;
	maze2[8][9]=WALL;							
	maze2[9][0]=WALL;							
	maze2[9][1]=WALL;							
	maze2[9][2]=WALL;							
	maze2[9][3]=WALL;							
	maze2[9][4]=WALL;							
	maze2[9][5]=WALL;							
	maze2[9][6]=WALL;							
	maze2[9][7]=WALL;							
	maze2[9][8]=WALL;							
	maze2[9][9]=WALL;
}

void show_maze1(operands array[][8],int size_x,int size_y)
{
	int i,j;
	for(i=0;i<size_y;i++)
	{
		for(j=0;j<size_x;j++)
		{
			if(array[i][j]==START)
			{
				printf("S");
			}
			else if(array[i][j]==FINISH)
			{
				printf("F");
			}
			else if(array[i][j]==SPACE)
			{
				printf(" ");
			}
			else if(array[i][j]==WALL)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

void show_maze2(operands array[][10],int size_x,int size_y)
{
	int i,j;
	for(i=0;i<size_y;i++)
	{
		for(j=0;j<size_x;j++)
		{
			if(array[i][j]==START)
			{
				printf("S");
			}
			else if(array[i][j]==FINISH)
			{
				printf("F");
			}
			else if(array[i][j]==SPACE)
			{
				printf(" ");
			}
			else if(array[i][j]==WALL)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}


void move(operands maze[][10], int pos_x, int pos_y)
{
	
}

void move_test(int maze[][10], int pos_x, int pos_y, int direction)
{


}
