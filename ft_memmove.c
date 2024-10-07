void *ft_memmove(void *dest_str, const void *src_str, size_t n)
{
    int i;
    unsigned char *str1;
    unsigned char *str2;
    unsigned char *buffer;

    i = 0;
    str1 = (unsigned char *)src_str;
    str2 = (unsigned char *)dest_str;
    while(i < n)
    {
        buffer[i] == str1[i];
        str2[i] == buffer[i];
        i++;
    }
    return dest_str;
}