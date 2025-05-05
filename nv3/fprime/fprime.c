#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int n = atoi(argv[1]);
        int i = 2;

        if(n == 1)
        {
            printf("1\n");
            return(0);
        }
        while(n >= i)
        {
            if(n % i == 0)
            {
                printf("%d", i);
                n /= i;
                if(n != 1)
                    printf("*");
            }   
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}