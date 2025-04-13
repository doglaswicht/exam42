#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int res = 0;

	if(argc == 4)
	{
		 a= atoi(argv[1]);
		 b = atoi(argv[3]);
		if(argv[2][0] == '+')
		{
			res = a + b;
		}
		else if (argv[2][0] == '-')
		{
			res = a - b;
		}
		else if(argv[2][0] == '*')
		{
			res = a * b;
		}
		else if(argv[2][0] == '/')
		{
			if(b == 0)
			{
				return(0);
			}
			res = a / b;
		}
		else if (argv[2][0] == '%')
		{
			if(b == 0)
			{
				return(0);
			}
			res = a % b;
		}
		printf("%d\n", res);
	}
	else
	{
		write(1, "\n", 1);
	}
	return EXIT_SUCCESS;
}
