int is_space(char c)
{
    if(c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v' || c == '\f' || c == '\b')
    {
        return 1;
    }
    return 0;
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while(is_space(str[i]) == 1) //skips spaces
    {
        i++;
    }
       
    while(str[i] == '-' || str[i] == '+') //handles negative numbers
    {
        if(str[i++] == '-')
        {
            sign *= -1;
        }
    }
    while(str[i]!= '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10;
            res = res + (str[i++] - 48); //res gets filled with the converted numbers
        }
        else
            return (res * sign); //number * sign to determine if its a positive or negative number
    }
    return (res * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", atoi("   42   42")); //doesn't compile
    printf("%d", ft_atoi("   42"));
}
