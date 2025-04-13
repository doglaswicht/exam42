#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int nbr = 0;
	
	if(str[0] == '-' || str[0] == '+')
	{
		if(str[0] == '-')
			sign = -1;
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i++] - '0');
	}
	return (sign * nbr);
}

/*
int main(int argc, char **argv)
{
	int i = 0;
	int nb;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		printf("%d\n", nb);
		
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}*/

