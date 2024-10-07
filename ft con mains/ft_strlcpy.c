#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    i = 0;
    j = 0;
    while(src[j] != '\0')
        j++;
    if(size > 0)
    {
        while(src[i] != '\0' && i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return j;
}

int main() {
    char src[] = "Hola, mundo!";
    char dst[20];

    // Prueba de ft_strlcpy
    size_t result = ft_strlcpy(dst, src, sizeof(dst));

    printf("Cadena copiada: %s\n", dst);
    printf("Longitud de src: %zu\n", result);

    return 0;
}