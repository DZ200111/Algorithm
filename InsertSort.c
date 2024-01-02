#include <stdio.h>
#define BUFFER_SIZE 6

int insertsort(int array[])
{
    int tmp = 0;
    for(int index = 0; index< BUFFER_SIZE; index++)
    {
        tmp = array[index];
        for(int jndex = index -1; jndex >= 0; jndex--)
        {
            
            if(tmp < array[jndex])
            {
                array[jndex + 1] = array[jndex];
                if(jndex == 0)
                {
                    array[jndex] = tmp;
                }
            }
            else
            {
                array[jndex + 1] = tmp;
                break;
            }
        }   
    }
}

int main()
{
    int array[BUFFER_SIZE] = {5,30,5,58,12,39};
    insertsort(array);
    for(int index = 0; index < BUFFER_SIZE; index++)
    {
        printf("%d\t", array[index]);
    }
    printf("\n");

    return 0;
}