#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define BUFFER_SIZE 10
void printarray(int *ptr)
{
    for(int idx = 0;idx < BUFFER_SIZE; idx++)
       {
           printf("%d ",ptr[idx]);
       }
}
void BubbleSort()
{ 
    int array[BUFFER_SIZE];
    memset(array,0,sizeof(array));
    srand(time(NULL));
    for(int idx = 0;idx < BUFFER_SIZE;idx++)
    {
        array[idx] = rand() % 10 + 1;
    }
    
    
    for(int idx = 0;idx < BUFFER_SIZE - 1;idx++)
    {
        //已经排好序的标志
        int sorted = 1;
        for(int idx1 = 0;idx1 < BUFFER_SIZE -1 -idx;idx1++)
        {
            if(array[idx1] > array[idx1 + 1])
            {
                int medium = 0;
                medium = array[idx1];
                array[idx1] = array[idx1 + 1];
                array[idx1 + 1] = medium;
                sorted = 0;
            }
        }
        if(sorted == 1)
        {
            break;
        }

        for(int idx = 0;idx < BUFFER_SIZE - 1;idx++)
    {
        //已经排好序的标志
        int sortedIndex = 1;
        for(int idx1 = 0;idx1 < BUFFER_SIZE -1 -idx;idx1++)
        {
            if(array[idx1] > array[idx1 + 1])
            {
                int medium = 0;
                medium = array[idx1];
                array[idx1] = array[idx1 + 1];
                array[idx1 + 1] = medium;
                sortedIndex = idx1;
            }
        }
    
        idx = sortedIndex;
    }
       printarray(array); 
       printf("\n");
    }

    
}

int main()
{
    BubbleSort();
    return 0;
}