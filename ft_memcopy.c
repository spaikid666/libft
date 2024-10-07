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