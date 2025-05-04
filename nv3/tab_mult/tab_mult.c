#include <unistd.h>

void    ft_putnbr(int nb)
{
    if(nb >= 10)
        ft_putnbr(nb / 10);
    char c = nb % 10 + '0';
    write(1, &c, 1);
}

int     ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if(str[i] == '+' || str[i] == '-' )
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] && str[i] >= '0' && str[i] <= '9')
        result = result * 10 + (str[i++] - '0');
    return(result * sign);
}

void tab_mult(char *str)
{
    int i = 1;
    int nb = ft_atoi(str);

    while( i <= 9)
    {
        ft_putnbr(i);
        
        write(1, " x ", 3);
        ft_putnbr(nb);
        write(1, " = ", 3);
        ft_putnbr( i * nb);
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        tab_mult(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}