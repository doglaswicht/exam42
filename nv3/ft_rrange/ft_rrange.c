
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size = (start > end) ? start - end + 1 : end - start + 1;
    int *arr = malloc(sizeof(int) * size);
    int i = 0;

    if (!arr)
        return NULL;
    while (i < size)
    {
        arr[i] = end;
        if (end > start)
            end--;
        else
            end++;
        i++;
    }
    return arr;
}

int *ft_rrange(int start, int end);

/*int main(void)
{
    int *tab = ft_rrange(1, 3);
    for (int i = 0; i < 3; i++)
        printf("%d ", tab[i]);
    free(tab);
    return 0;
}*/