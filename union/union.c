#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int check_doubles(char *str, char c, int index)
{
    int i = 0;

    while(str[i] != '\0' && i < index)
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

void union(char *str1, char *str2)
{
    int i = 0;
    int j = 0;

    while(str1[i] != '\0')
    {
        if(check_doubles(str1, str1[i], i) == 0) //print first string while there are no doubles
        {
            ft_putchar(str1[i]);
            
        }
        i++;
    }
    while(str2[j] != '\0')
    {
        if(check_doubles(str1, str2[j], i) == 0 && check_doubles(str2, str2[j], j) == 0) 
        {
            ft_putchar(str2[j]); //print second string while there are no doubles from both first and second string
        }
        j++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        union(argv[1], argv[2]);
    }
    ft_putchar('\n');
    return 0;
}
