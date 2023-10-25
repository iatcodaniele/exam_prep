int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    return i;
}

char *ft_strrev(char *str)
{
    int start = 0;
    int end = ft_strlen(str) - 1;
    int temp;

    while(str[start] < str[end])
    {
           temp = str[start];
           str[start] = str[end];
           str[end] = temp;
           start++;
           end--;
    }
    return (str);
}

#include <stdio.h>
int main()
{
    char x[] = "   hello";

    printf("%s", ft_strrev(x));
}