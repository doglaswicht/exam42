#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
		
		int i = 0;
		int found = 0;
		while(argv[1][i])
		{
			if(argv[1][i] >= '0' && argv[1][i] <= '9')
			{
				ft_putchar(argv[1][i]);
				found = 1;
				break;
			}
			i++;
		}
		if(!found)
			ft_putchar('\n');
		else
			ft_putchar('\n');
		return (0);


}
