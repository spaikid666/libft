char *ft_strnstr(const char *big, const char *lil, size_t len)
{
    int i;
    int j;

    i = 0;
    if(lil[i] == '\0')
        return (char *)big;
    while(big[i] != '\0' && i < len)
    {
        j = 0;
        while(big[i + j] == lil[j] && i + j < len)
        {
            if(lil[j + 1] == '\0')
                return (char *)&big[i];
            j++;
        }
        i++;
    }
    return (NULL);
}