#include <unistd.h>

// Funcao para verificar se um caractere eh uma letra.
int is_alpha(char c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

//Funcao para transformar lettra maiuscula em minuscula

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return(c + 32);
    return c;
}

//Funcao para transformar letra minuscula em maiuscula

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return(c - 32);
    return (c);
}

void rstr_capitalizer(char *str)
{
    int i = 0;

    while(str[i])
    {
        str[i] = to_lower(str[i]);
        // se a letra e (proximo caractere nao  eh letra ou fim da string), eh a ultima letra do mot
        if(is_alpha(str[i]) && (!is_alpha(str[i + 1])))
            str[i] = to_upper(str[i]);
        
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    if(argc >= 2)
    {
        while (i < argc)
        {
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}