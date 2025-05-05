#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;
    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = nb % 10 + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i++] - '0');
    }
    return (sign * nb);
}

int is_prime(int n)
{
    int i = 2;
    if (n < 2)
        return (0);
    while (i <= n / 2)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    int sum = 0;
    int n;

    if (argc != 2)
    {
        write(1, "0\n", 2);
        return (0);
    }
    n = ft_atoi(argv[1]);
    if (n <= 0)
    {
        write(1, "0\n", 2);
        return (0);
    }
    while (n > 1)
    {
        if (is_prime(n))
            sum += n;
        n--;
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
    return (0);
}
