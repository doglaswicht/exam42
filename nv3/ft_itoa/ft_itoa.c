
#include <stdlib.h>
#include <stdio.h>
int count_digits(int nb)
{
    int count = 0;
    if(nb < 0)
        count++;
    while(nb != 0)
    {
        nb = nb / 10;
        count++;
    }
    return count;
}

char *ft_itoa(int nbr)
{
    int len = count_digits(nbr);
    char *str = malloc(len + 1);

    if(!str)
    return NULL;

    str[len] = '\0';

    if(nbr == 0)
    {
        str[0] = '0';
        return str;
    }

    int is_negative = 0;
    long nb = nbr;
    
    if(nb < 0)
    {
        is_negative = 1;
        nb = -nb;
    }
    while(nb > 0)
    {
        str[--len] = (nb % 10) + '0';
        nb = nb / 10;
    }
    if(is_negative)
        str[0] = '-';
    return str;
}

int main(void)
{
    int i = 0;
    int num[] = {0, 123, -456, 2147483647, -2147483648};
    while (i < 5)
    {
        char *res = ft_itoa(num[i]);
        printf("ft_itoa(%d) = %s\n", num[1], res);
        i++;
    }
    return (0);
}