#include <unistd.h>

int est_present(char c, char *str)
{
	int i = 0;
	while (str[i])
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int deja_affiche(char c, char *str, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if(str[i] == c)
			 return(1);
		i++;
	}
	return (0);
}


int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			if (est_present(argv[1][i], argv[2]) && !deja_affiche(argv[1][i], argv[1], i))
			{
				write(1, &argv[1][i], 1);
			}
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
