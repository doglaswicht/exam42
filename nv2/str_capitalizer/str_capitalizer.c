#include <unistd.h>
#include <stdlib.h>

int    is_alpha(char c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void    str_capitalizer(char *str)
{
    int i = 0;
    int new_word = 1;

    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        if(is_alpha(str[i]))
        {
            if(new_word && (str[i] >= 'a' && str[i] <= 'z'))
            {
                str[i] = str[i] - 32;
            }
            new_word = 0;
        }
        else if(str[i] == ' ' || str[i] == '\t') // <-- trocou aqui
        {
            new_word = 1;
        }
        else
            new_word = 0;
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc >= 2)
    {
        int i = 1;
        
        while(i < argc)
        {
            str_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }    
    }
    else
        write(1, "\n", 1);
    return(0);
}
