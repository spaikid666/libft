int ft_strlen(char  *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

int ft_delante(char const *s1, char const *set)
{
    int i;
    int c1;
    int j;

    i = 0;
    c1 = 0;
    j = 0;
    while(set[j] != '\0')
    {
        if(set[j] == s1[i])
        {
                j = 0;
                c1++;
                i++;
        }
        else
            j++;
    }
    return  c1;
}

int ft_detras(char const *s1, char const *set)
{
    int i;
    int c2;
    int j;
    int size;

    i = 0;
    c2 = 0;
    j = 0;
    size = ft_strlen(s1) - 1;
    while(set[j] != '\0')
    {
        if(set[j] == s1[size])
        {
                j = 0;
                c2++;
                size--;
        }
        else
            j++;
    }
    return  c2;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    char    *str;
    int c1;
    int c2;

    if (!s1)
        return NULL;
    c1 = ft_delante(s1, set);
    c2 = ft_detras(s1, set);
    if(c1 > c2 || c1 <= c2)
        str = malloc(sizeof(char) * (ft_strlen(s1) - (c1 + c2) + 1));
        if(c1 > c2)
        {
            str[0] = '\0';
            return str;
        }
    if (!str)
        return NULL;
    i = 0;
    while(c1 <= c2)
        str[i++] = s1[c1++];
    str[i] = '\0';
    return str;
}    

    if(c1 > c2)
    {
        str = malloc(1);
        str[0] = '\0';
        return str;
    }