#include <unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;

	while(s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if(s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
	i++;
	}
	return (i);
}

#include<stdio.h>
int	main(int argc, char **argv)
{
	int i = 0;
	if(argc == 3)
	{	
	printf("%d\n", ft_strcspn(argv[1], argv[2]));

	}
}
