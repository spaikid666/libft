#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char    *str;

    i = 0;
    j = 0;
    str = malloc(sizeof(char) * (len + 1));
    if(!str)
        return NULL;
    while(s[i] != '\0')
        i++;
    if(start >= i)
    {
        str = malloc(1)
        if(str)
            str[0] = '\0';
        return str;
    }
    while(j < len && s[start + j] != '\0')
    {
        str[j] = s[start + j];
        j++;
    }
    str[j] = '\0';
    return  str;
}

int main(void)
{
    char *s = "Hola, mundo";
    char *sub;

    // Prueba 1: Subcadena desde el inicio
    sub = ft_substr(s, 0, 5);
    printf("Subcadena (inicio): %s\n", sub);
    free(sub);

    // Prueba 2: Subcadena desde la mitad
    sub = ft_substr(s, 7, 4);
    printf("Subcadena (mitad): %s\n", sub);
    free(sub);

    // Prueba 3: Subcadena que excede el tamaño de la cadena original
    sub = ft_substr(s, 7, 10);
    printf("Subcadena (más grande que resto): %s\n", sub);
    free(sub);

    // Prueba 4: Subcadena con start fuera de la longitud
    sub = ft_substr(s, 20, 5);
    printf("Subcadena (start fuera de límites): %s\n", sub);
    free(sub);

    return 0;
}