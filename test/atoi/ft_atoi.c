#include <unistd.h>

int check_spaces(char c)
{
    if(c == '\n' || c == 'b' || c == '\t' || c == '\v' || c == '\r' || c == 'f' || c == 32)
    {
        return 1;
    }
    return 0;
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    
    while(str[i])
    {
        if(check_spaces(str[i]) == 1)
        {
            i++;
        }

        while(str[i] == '-' || str[i] == '+')
        {
            if(str[i] == '-')
            {
                sign *= -1;
            }
            i++;
        }

    
        while(str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10;
            res = res + (str[i++] - '0');
        }
        return res * sign;
    }
    return res * sign;
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_atoi("-42"));
    printf("%d\n", ft_atoi("0"));
    printf("%d\n", ft_atoi("-2147483648"));
    printf("%d\n", ft_atoi("2147483647"));
}