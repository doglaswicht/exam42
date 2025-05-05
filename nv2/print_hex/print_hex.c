
#include <unistd.h>

int ft_atoi(const char *str)
{
    int nb = 0;
    while (*str >= '0' && *str <= '9')
        nb = nb * 10 + (*str++ - '0');
    return (nb);
}

void print_hex(int nb)
{
    char *base = "0123456789abcdef";
    if (nb >= 16)
        print_hex(nb / 16);
    write(1, &base[nb % 16], 1);
}

int main(int argc, char **argv)
{
    if(argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
    return (0);
}