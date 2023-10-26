//atoi function

int ft_is_space(char *str)
{
    int i = 0;

    if(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == 32)
    {
        return (1);
    }
    return (0);
}

int ft_atoi(char *str)
{
    int res;
    int i;
    int sign;
    
    res = 0;
    i = 0;
    sign = 1;
    
    while(ft_is_space(str))
        	i++;
    	
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i++] == '-')
        	sign*= -1;
    }
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10;
            res = res + (str[i++] - '0');
        }
        else
            return (res * sign);
    }
    return (res * sign);
}

#include <stdio.h>

int main()
{
    printf("%d\n", ft_atoi("-42"));
    printf("%d\n", ft_atoi("42"));
    printf("%d\n", ft_atoi("2147483647"));
    printf("%d\n", ft_atoi("-2147483648"));
    printf("%d\n", ft_atoi("    42 42"));
}
