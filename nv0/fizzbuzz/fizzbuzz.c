#include <unistd.h>

void ft_putnbr(int n)
{
	char c;

	if (n >= 10)
	{
		ft_putnbr( n / 10);
	}
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int c = 1;

	while(c <= 100)
	{
		if((c % 5 == 0) && (c % 3 == 0))
		{
			write(1, "fizzbuzz", 8);
		}
		else if(c % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else if (c % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else	
		{
			ft_putnbr(c);
		}
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
