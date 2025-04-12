
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

/*int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int total = ft_strlen(argv[1]);
		printf("%d\n", total);
	}
}*/
