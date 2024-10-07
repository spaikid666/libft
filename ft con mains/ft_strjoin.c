int ft_strlen(char  *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return  i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int z1;
    int z2;
    char    *str;

    if (!s1 || !s2)
        return NULL;
    z1 = ft_strlen(s1);
    z2 = ft_strlen(s2);
    str = malloc((z1 + z2 + 1) * sizeof(char));
    if(!str)
        return NULL;
    i = 0;
    while(s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j] != '\0')
        str[i++] = s2[j++];
    str[i] = '\0';
    return  str;
}