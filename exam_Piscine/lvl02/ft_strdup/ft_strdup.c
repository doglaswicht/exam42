#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int i = 0;
	char *dup = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while(str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		
		char *dup = ft_strdup(argv[1]);
		printf("%s\n", dup);
	}
}
