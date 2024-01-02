#include <stdio.h>

#define BUFFER_SIZE 7

int selectsort(int array[])
{
    int tmp = 0;
    int med = 0;
    for(int index = 0; index < BUFFER_SIZE - 1; index++)
    {
        tmp = index;
        for(int jndex = tmp + 1; jndex < BUFFER_SIZE; jndex++)
        {
             if(array[jndex] < array[tmp])
             {
                tmp = jndex;
             }
        }
        if(array[index] > array[tmp])
        {
            med = array[index];
            array[index] = array[tmp];
            array[tmp] = med;
        }
    }
}

int main()
{
    int array[BUFFER_SIZE] = {1,30,24,5,58,12,39};
    selectsort(array);
    for(int index = 0; index < BUFFER_SIZE; index++)
    {
        printf("%d\t", array[index]);
    }
    printf("\n");
    return 0;
}