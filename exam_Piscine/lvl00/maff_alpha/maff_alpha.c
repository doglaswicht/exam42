#include <unistd.h>

int main(void)
{
	char c = 'a';
	int i = 1;

	while(c <= 'z')
	{
		if(i % 2 == 0)
		{
			char upper = c - 32;
			write(1, &upper ,1);
		}
		else
			write(1, &c, 1);
		i++;
		c++;
	}
	write(1, "\n", 1);
	return (0);
}
