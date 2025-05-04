
#include <stdlib.h>


int *ft_range(int start, int end)
{
    int size = (start <= end) ? end - start + 1 : start - end + 1; 
    int *array = malloc(sizeof(int) * size);
    int i = 0;

    if(!array)
        return(NULL);
    
    if(start <= end)
    {
        while(start <= end)
            array[i++] = start++;
    }
    else
    {
        while(start >= end)
            array[i++] = start--;
    }
    return (array);
}

#include <stdio.h>

int main(void)
{
    int *result = ft_range(3, -1);
    int i = 0;
    while (i < 5) // 3, 2, 1, 0, -1
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");
    return 0;
}

