#include "main.h"

data_t bubble(data_t *arr, int size )
{
    int temp;
    for(int i =0; i<size; i++)
    {
        for(int j = i; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp =arr[i];
                arr[i] = arr[j];
                arr[j] =temp;
            }
        }
    }
}
