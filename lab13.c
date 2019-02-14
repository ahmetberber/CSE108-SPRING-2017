#include <stdio.h>
#include<stdlib.h>

typedef struct{
	int limit;
	int current_size;
	int *my_arr;
}Dyn_arr;

void init(Dyn_arr *arr);
void add_to_last_input(Dyn_arr *arr, int input_value);

int main()
{
	int i;
	Dyn_arr *array;
	array = (Dyn_arr*)malloc(sizeof(Dyn_arr));
	init(array);

	add_to_last_input(array,3);
	add_to_last_input(array,5);
	add_to_last_input(array,7);
	add_to_last_input(array,8);
	add_to_last_input(array,11);
	add_to_last_input(array,15);

	for(i=0;i<array->limit;i++)
	{
		printf("%d\t",array->my_arr[i]);
	}

	free(array->my_arr);
	return 0;
}

void init(Dyn_arr *arr)
{
	int i;

	arr->limit=5;
	arr->my_arr = (int*)malloc(arr->limit*sizeof(int));
	arr->current_size=0;

	for(i=0;i<arr->limit;i++)
	{
		arr->my_arr[i]=0;
	}
}

void add_to_last_input(Dyn_arr *arr, int input_value)
{
	if(arr->limit==arr->current_size)
	{
		int *temp_arr;
		int i;
		temp_arr = (int*)malloc(arr->limit*sizeof(int));
		for(i=0;i<arr->limit;i++)
		{
			temp_arr[i] = arr->my_arr[i];
		} 
		arr->limit+=5;
		arr->my_arr = (int*)malloc(arr->limit*sizeof(int));
		for(i=0;i<arr->current_size;i++)
		{
			arr->my_arr[i]=temp_arr[i];
		}
		free(temp_arr);
		arr->my_arr[arr->current_size]=input_value;
		arr->current_size++;	
	}
	else
	{
		arr->my_arr[arr->current_size]=input_value;
		arr->current_size++;
	}
}