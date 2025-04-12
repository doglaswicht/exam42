#include <unistd.h>

void	alpha_mirror(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 219 - str[i];
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 155 - str[i];
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		char *str = argv[1];
		alpha_mirror(str);
	}
	write(1, "\n", 1);
	return(0);
}
