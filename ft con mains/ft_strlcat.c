size_t  ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t  i;
    size_t  l1;
    size_t  l2;

    i = 0;
    l1 = 0;
    l2 = 0;
    while(dst[l2] != '\0')
        l2++;
    while(src[l1] != '\0')
        l1++;
    if (l2 >= n)
        return n + l1;
    while (i + l2 < n - 1 && src[i] != '\0')
    {
        dst[l2 + i] = src[i];
        i++;
    }
    dst[l2 + i] = '\0';
    return l1 + l2;
}