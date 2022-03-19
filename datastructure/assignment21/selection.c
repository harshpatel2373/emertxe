#include "main.h"

data_t selection(data_t *arr, data_t size )
{
    int i, j, min_idx,temp;

    	// One by one move boundary of unsorted subarray
    	for (i = 0; i < size; i++)
    	{
        	// Find the minimum element in unsorted array
        	min_idx = i;
        	for (j = i+1; j < size; j++)
		    {
		          if (arr[j] < arr[min_idx])
			      {
				        min_idx = j;
			      }
 		    }
	        // Swap the found minimum element with the first element
        	temp =arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] =temp;
    	}
}
