void *ft_memcpy(void *dest_str, const void * src_str, size_t n)
{
    int i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char *)src_str;
    str2 = (unsigned char *)dest_str;
    while(i < n)
    {
        str2[i] == str1[i];
        i++;
    }
    return dest_str;
}