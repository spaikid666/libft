int ft_atoi(const char *str)
{
    int i;
    int signo;
    int n;

    i = 0;
    n = 0;
    signo = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || 
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            signo = -1;
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        n = (n * 10) + (str[i] - '0');
        i++;
    }
    return signo * n;
}