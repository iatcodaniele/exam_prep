int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strrev(char *str)
{
    int start = 0;
    int end = ft_strlen(str) - 1; //-1 to exclude the null byte
    char temp;

    while(start < ((end + 1) / 2)) 
    {
           temp = str[start];
           str[start] = str[end-start];
           str[end - start] = temp;
           start++;
           
    }
    return (str);
}

#include <stdio.h>
int main()
{
    char x[] = "start";

    printf("%s", ft_strrev(x));
}
