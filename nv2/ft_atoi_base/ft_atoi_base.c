
#include <stdio.h>
#include <stdlib.h>

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int digit = 0;
    int result = 0;

    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }

    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'f')
            digit = str[i] -  'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'F')
            digit = str[i] - 'A' + 10;
        else
            break;

        if(digit >= str_base)
            break;
        result = result * str_base + digit;
        i++;
    }
    return (result * sign);
}


#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base);

int main(void)
{
	printf("%d\n", ft_atoi_base("1010", 2));     // 10
	printf("%d\n", ft_atoi_base("1F", 16));       // 31
	printf("%d\n", ft_atoi_base("-10", 10));      // -10
	printf("%d\n", ft_atoi_base("77", 8));        // 63
	printf("%d\n", ft_atoi_base("AB", 16));       // 171
}