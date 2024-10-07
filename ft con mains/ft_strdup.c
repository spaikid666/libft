#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    int i;
    int j;
    char    *str;
    i = 0;
    j = 0;
    while(s[i] != '\0')
        i++;
    str = malloc(sizeof(char) * (i + 1));
    if (!str)
        return NULL;
    while(j != i)
    {
        str[j] = s[j];
        j++;
    }
    return str;
}