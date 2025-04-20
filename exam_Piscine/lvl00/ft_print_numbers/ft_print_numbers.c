#include <unistd.h>

void print_numbers(int nb)
{
	nb = '0';
	while(nb <= '9')
	{
		write(1, &nb, 1);
		nb++;
	}
}

int main(void)
{
	int nb;
	print_numbers(nb);
	return (0);
}
