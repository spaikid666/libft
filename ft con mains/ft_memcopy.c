#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest_str, const void * src_str, size_t n)
{
    size_t i;
    unsigned char *str2 = *dest_str;
    unsigned char *str1 = *src_str;

    i = 0;
    while(i < n)
    {
        str1[i] = str2[i];
        i++;
    }
    return dest_str;
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];  // Asegúrate de que el tamaño de destino sea suficiente

    // Usar ft_memcpy para copiar src a dest
    ft_memcpy(dest, src, strlen(src) + 1);  // +1 para incluir el terminador nulo

    // Imprimir la cadena copiada
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}