#include "main.h"

/* Function for binary search using iterations */
data_t binarySearch_iterative(data_t *arr, data_t size, data_t key)
{
    int high = (size-1), low = 0, mid;
    while(1)
    {
        mid = (high +low)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid] > key)
        {
            high = mid-1;
        }
        else if(arr[mid] < key )
        {
            low = mid+1;
        }

       // if(high == low)
        //{
          //  return mid;
        //}
        if(high < low)
        {
            return DATA_NOT_FOUND;
        }
    }
}

