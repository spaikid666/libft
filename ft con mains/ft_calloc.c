#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nitems, size_t size)
{
    size_t i;
    void    *arr;
    unsigned char   *p;

    arr = malloc(nitems * size);
    if(arr == NULL)
        return NULL;
    i = 0;
    p = arr;
    while(i < nitems * size)
    {
        p[i] = 0;
        i++;
    }
    return  arr;
}

int main() {
    // Probamos nuestra implementación de calloc con 5 enteros
    int *arr = (int *)calloc(5, sizeof(int));

    // Verificamos si la memoria fue asignada correctamente
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Mostramos los valores iniciales del arreglo (deben ser todos 0)
    printf("Valores iniciales del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Asignamos nuevos valores a los elementos del arreglo
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // Mostramos los nuevos valores del arreglo
    printf("\nNuevos valores del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Liberamos la memoria asignada
    free(arr);

    return 0;
}