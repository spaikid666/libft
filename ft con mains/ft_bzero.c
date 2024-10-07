#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *str = (unsigned char *)s;

    i = 0;
    while(i < n)
    {
        str[i] = '\0';
        i++;
    }
}

int main()
{
    char str[10];
    ft_bzero(str, sizeof(str));

    // Mostrar el resultado
    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    return 0;
}