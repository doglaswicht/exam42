#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i = 0;
	int c = 1;

	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 96;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i] - 64;
		}
		else
		{
			c = 1; 
		}
		while( c >= 1)
		{
			write(1, &str[i], 1);
			c--;
		}
		i++;
	}

}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);

	}
	write(1, "\n", 1);
	return (0);
}
