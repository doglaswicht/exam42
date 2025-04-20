#include <unistd.h>

int main(void)
{
  char c = 'z';
  int pos = 1;

  while(c >= 'a')
  {
    if(pos % 2 == 1)
        {
            write(1, &c, 1);
        }
    else
    {
        char up = c - 32;
        write(1, &up, 1);
    }
    c--;
    pos++;
  }
  write(1, "\n", 1);
  return(0);
}