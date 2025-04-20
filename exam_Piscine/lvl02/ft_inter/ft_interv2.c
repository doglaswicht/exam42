#include <unistd.h>

int is_duplicate(char c, char *str)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] == c)
		{
			return(1);
		}
		i++;
	}
	return(0);
}

int is_on_str(char c, char *str, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if(str[i] == c)
		{
			return(1);
		}
		i++;
	}
	return (0);
}


int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i = 0;
		while(argv[1][i])
		{
			if(is_duplicate(argv[1][i], argv[2]) && is_on_str(argv[1][i], argv[2], i))
			{
				write(1, &argv[1][i], 1);
			}
				i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
