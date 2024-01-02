#include <stdio.h>

#define BUFFER_SIZE 10

void quicksort(int *array, int S, int E)
{
    if(array == NULL)
            return;
    //递归必须有结束条件
    if(S >= E)
       return;
    int start = S;
    int end = E;
    int medium = array[S];
    while(start < end)
    {
        while(end > start && array[end] >= medium)
        {
            end--;
        }
        if(end > start)
        {
            array[start] = array[end];
        }
        while(start < end && array[start] <= medium)
        {
            start++;
        }
        if(start < end)
        {
            array[end] = array[start];
        }
        if(start >= end)
        {
            array[start] = medium;
        }
    }
    quicksort(array, S, start - 1);
    quicksort(array, start + 1, E);
}

int main()
{
    int array[BUFFER_SIZE] = {17, 13, 29, 39, 19, 30, 34, 18, 33, 15};
    quicksort(array, 0, BUFFER_SIZE - 1);
    for(int idx = 0 ; idx < BUFFER_SIZE; idx++)
    {
        printf("%d ", array[idx]);
    }
    printf("\n");

    return 0;
}