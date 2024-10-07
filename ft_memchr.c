void *ft_memchr(const void *string, int c, size_t n)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str = (unsigned char *)string;
    while(i < n)
    {
        if(str[i] == (unsigned char)c)
            return (void *)(str + i);
        i++;
    }
    return NULL;
}