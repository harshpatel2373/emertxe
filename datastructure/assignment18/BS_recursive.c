#include "main.h"

data_t binarySearch_recursive( data_t *arr, data_t size, data_t key, data_t low, data_t high )
{
    int mid;
 if(high >=low)
 {
    mid = (high +low)/2;
  if(arr[mid]> key)
  {
      high =mid - 1;
  }
  else if(arr[mid] < key )
 {
  low =mid + 1;
 }
 if(arr[mid] == key)
 {
   return mid;
 }
  return binarySearch_recursive(arr,size,key,low,high);
}
 else
 {
 return DATA_NOT_FOUND;
 }
}
