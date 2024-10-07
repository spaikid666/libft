#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest_str, const void *src_str, size_t n)
{
    int i;
    unsigned char *str1;
    unsigned char *str2;
    unsigned char *buffer;

    i = 0;
    str1 = (unsigned char *)src_str;
    str2 = (unsigned char *)dest_str;
    buffer = sizeof(src_str);
    while(i < n)
    {
        buffer[i] == str1[i];
        str2[i] == buffer[i];
        i++;
    }
    return dest_str;
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];  // Asegúrate de que el tamaño de destino sea suficiente

    // Usar ft_memcpy para copiar src a dest
    ft_memmove(dest, src, strlen(src) + 1);  // +1 para incluir el terminador nulo

    // Imprimir la cadena copiada
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}