#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        int min;
        if (a < b) // pega o menor dos dois valores e guarda dentro da variavel min.
            min = a;
        else
            min = b;

        while(min > 0) //vai testar mim ate 1 pra ver se encontramos um numero que divide a e b ao mesmo tempo
        {
            if(a % min == 0 && b % min == 0) //Verifica se mim divide a e b ao mesmo tempo
            {
                printf("%d\n", min);
                return(0);
            }
            min--;
        }
    }
    write(1, "\n", 1);
    return(0);

}
