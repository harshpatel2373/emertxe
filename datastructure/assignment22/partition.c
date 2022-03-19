#include "main.h"

/* Function to partition the array */
int partition( int *arr, int first, int last )
{
    int pivot = arr[last];
	int i, partition_index = first;
	int temp;

	for(i = first; i < last;i++)
	{
		if(arr[i] < pivot)
		{
			temp = arr[i];
			arr[i] = arr[partition_index];
			arr[partition_index] = temp;
			partition_index++;
		}
	}
	temp = arr[i];
	arr[i] = arr[partition_index];
	arr[partition_index] = temp;

	return partition_index;
}
