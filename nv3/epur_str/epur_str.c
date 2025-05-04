#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i = 0;
    int start = 0;
    
    if(argc == 2)
    {
        while (argv[1][i] == ' ' && argv[1][i] == '\t')
        {
            i++;
        }
        while(argv[1][i])
        {
            if (argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                if(start)
                {
                    ft_putchar(' ');
                }
            
            while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                ft_putchar(argv[1][i]);
                i++;
            }
            start = 1;
            }
            else
            {
                i++;
            }
        }
    }
        ft_putchar('\n');
        return (0);
}