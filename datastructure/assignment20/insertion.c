#include "main.h"

data_t insertion(data_t *arr, data_t size)
{
    int temp;
for(int i=0;i<size-1;i++)
{

if(arr[i] > arr[i+1])
{
    int key =arr[i+1];
 for(int k=(i+1); k > -1; k--)
 {
    if(arr[k] > key)
    {
        temp =arr[k];
        arr[k] =arr[k+1];
        arr[k+1] =temp;
    }
 }

}
}
	
    /*int key,j,temp;
    for(int i=1; i<= size; i++)
    {
        key =arr[i];
        j=i-1;
        while((j>=0) && (arr[j] >key))
        {
         //   temp = arr[j+1] ;
               arr[j+1] =arr[j];
           //    arr[j] = temp;
            j=i-1;
        }
        arr[j+1] =key;
    }*/
}
