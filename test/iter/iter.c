#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int check_doubles(char *str, char c, int index)
{
    int i = 0;

    while(i < index)
    {
        if(str[i] == c)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

void iter(char *str1, char *str2)
{
    int i = 0;
    int j = 0;

    while(str1[i])
    {
        if(check_doubles(str1, str1[i], i) == 0)
        {
            while(str2[j])
            {
                if(str1[i] == str2[j])
                {
                    ft_putchar(str1[i]);
                    break;
                }
                j++;
            }
        }
        i++;
    }
}

int main()
{
    char x[] = "nothing";
    char y[] = "this sentence hides nothing";

    iter(x, y);
}