#include <unistd.h>

void    title(char *str)
{
    int i = 0;
    int start = 1; // criamos uma flag para achar a primeira letra depois do ' '
    while (str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z' && start == 1)
        {
            char c = str[i] - 32;
            write(1, &c, 1);
        }
        else
            write(1, &str[i], 1);

        if(str[i] == ' ')
            start = 1;
        else
            start = 0;
    i++;       
    }
        

}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        title(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}