#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	char *dest;

	while (src[i] != '\0')
	{
		i++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
	{
		return(NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main(void)
{
	char src[] = "TopSecret";
	char *dest;

	dest = ft_strdup(src);
	printf("%s\n", dest);
}
