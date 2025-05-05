#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int start = 0;

    if(argc == 2)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        
        while(argv[1][i])
        {
            if(argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                if(start)
                    write(1, "   ", 3);
                
                while(argv[1][i] != ' ' && argv[1][i] != '\t')
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
                start = 1 ;
            }
            else
                i++;
        }
    }   
    write(1, "\n", 1);
    return (0);
}
