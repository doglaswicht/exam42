#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

/*int main(void)
{
	char dest[10];
	char src[10] = "TopSecret";
	ft_strcpy(dest, src);
	printf("Valor de src :%s  Valor de dest:%s \n", src, dest);

}*/
