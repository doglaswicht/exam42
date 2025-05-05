
#include <stdlib.h>

int count_words(char *str)
{
    int i = 0;
    int in_word = 0;
    int count = 0;

    while(str[i])
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            if(!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        else
            in_word = 0;
        i++;
    }
    return (count);
}

char *word_dup(char *str, int start, int end)
{
    char *word;
    int i = 0;

    word = malloc(sizeof(char) * (end - start + 1));
    while(start < end)
    {
        word[i++] = str[start++];
    }
    word[i] = '\0';
    return(word);
}

char **ft_split(char *str)
{
    int i = 0, j = 0, start = 0;
    int word_index = 0;
    char **result;

    result = malloc(sizeof(char *) * (count_words(str) + 1));
    if(!result)
        return NULL;
    while(str[i])
    {
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        start = i;
        while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
        if( i > start)
            result[word_index] = word_dup(str, start, i);
    }
    result[word_index] = NULL;
    return (result);

}

#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char **split = ft_split(argv[1]);
        int i = 0;
        while(split[i])
        {
            printf("Mot %d : %s\n", i + 1, split[i]);
            i++;
        }
    }
    return (0);
}