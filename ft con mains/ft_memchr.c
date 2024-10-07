#include <stdio.h>

void *ft_memchr(const void *string, int c, size_t n)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str = (unsigned char *)string;
    while(i < n)
    {
        if(str[i] == (unsigned char)c)
            return (void *)(str + i);
        i++;
    }
    return NULL;
}

int main()
{
    unsigned char *s = (unsigned char *)"Hola pesicola";
    int c = 'p';
    size_t n = 7;
    unsigned char *sol;

    sol = ft_memchr(s, c, n);
    printf("%s\n", sol);
}