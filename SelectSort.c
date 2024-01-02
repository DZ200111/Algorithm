#include <stdio.h>

#define BUFFER_SIZE 7

/*选择排序:相较于冒泡排序减少了交换的次数*/
int selectsort(int *array, int length)
{
  int minValue = 0;
  int minIndex = 0;
  for(int pos = 0; pos < length; pos++)
  {
    minValue = array[pos];
    for(int begin = pos + 1; begin < length; begin++)
    {
        if(minValue > array[begin])
        {
            minValue = array[begin];
            minIndex = begin;
        }
    }
    if(array[pos] > minValue)
    {
        int temp = array[pos];
        array[pos] = minValue;
        array[minIndex] = temp;
    }
  }
}

int main()
{
    int array[BUFFER_SIZE] = {1,30,24,5,58,12,39};
    int length = sizeof(array) / sizeof(array[0]);
    selectsort(array, length);
    for(int index = 0; index < BUFFER_SIZE; index++)
    {
        printf("%d\t", array[index]);
    }
    printf("\n");
    return 0;
}