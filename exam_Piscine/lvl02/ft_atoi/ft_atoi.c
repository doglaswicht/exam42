#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	 int nb = 0;
	 int i = 0;
	 int sign = 1;
	 
	 while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		 i++;

	 if(str[i] == '-' || str[i] == '+' )
	 {
		 if(str[i] == '-')
		 	sign  = -1;
		 i++;
	 }
	 while(str[i] >= '0' && str[i] <= '9')
	 {
		 nb = nb * 10 + (str[i] - '0');
		 i++;
	 }
	 return(sign * nb);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int nb = ft_atoi(argv[1]);
		printf("%d\n", nb);
	}
	return (0);
}
