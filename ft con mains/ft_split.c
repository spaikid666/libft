#include <stdio.h>
#include <stdlib.h>

void ft_free_matrix(char **matrix, int n)
{
    int i;

    i = 0;
    while(i < n)
    {
        free(matrix[i]);
        i++;
    }
    free(matrix);
}

int ft_wordcount(char const *s, char c)
{
    int i;
    int nw;

    i = 0;
    nw = 0;
    while(s[i] != '\0')
    {
        if(s[i] != c && (s[i - 1] == c || i == 0))
            nw++;
        i++;
    }
    return  nw;
}

int ft_strlenword(char *str, char c, int n)
{
    int i;
    int j;
    int nw;

    i = 0;
    j = 0;
    nw = 0;
    while(str[i] != '\0')
    {
        if(nw == n || (n == 1 && str[0] != c))
        {
            while(str[i] != '\0' && str[i] != c)
                j++;
                i++;
            return j;
        }
        else if(str[i] != c && (str[i - 1] == c || i == 0))
            nw++;
        i++;
    }
    return 0;
}

char *ft_allocateword(char const *s, int start, int end)
{
    char *word;
    int i;

    i = 0;
    word = (char *)malloc((end - start + 1) * sizeof(char));
    if(!word)
        return NULL;
    while(start < end)
    {
        word[i] = s[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return word;
}

char **ft_fill(char const *s, char c, int nw, char **matrix)
{
    int i;
    int j;
    int start;

    i = 0;
    j = 0;
    while (j < nw)
    {
        while(s[i] == c)
            i++;
        start = i;
        while(s[i] != '\0' && s[i] != c)
            i++;
        matrix[j] = ft_allocateword(s, start, i);
        if(!matrix[j])
            return (ft_free_matrix(matrix, j), NULL);
        j++;        
    }
    matrix[j] = NULL;
    return matrix;
}

char **ft_split(char const *s, char c)
{
    char **matrix;
    int nw;

    if (!s)
        return NULL;
    nw = ft_wordcount(s, c);
    matrix = (char **)malloc((nw + 1) * sizeof(char *));
    if (!matrix)
        return NULL;
    return ft_fill_matrix(s, c, nw, matrix);
}

int main()
{
    int i;
    char    *str;
    char    c;
    int nw;
    char    **matrix;

    i = 0;
    str = ",divideme,esto,como,ejemplo,";
    c = ',';
    nw = ft_wordcount(*str, c);
    matrix = ft_split(str, c)

    if (!matrix)  // Verificamos si ft_split devuelve NULL
    {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    // Imprimimos cada palabra en la matriz
    while (i < nw)
    {
        printf("%s\n", matrix[i]);
        i++;
    }

    // Liberamos la memoria asignada
    ft_free_matrix(matrix, nw);

    return 0;
}