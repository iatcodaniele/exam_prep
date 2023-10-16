//inter function

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int check(char *str, char c, int index)
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

void inter(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    
    while(str1[i] != '\0')
    {
        if(check(str1, str1[i], i) == 0)
        {
            while(str2[j] != '\0')
            {
                if(str2[j] == str1[i])
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
    char str1[] = "nothing";
    char str2[] = "this sentence hides nothing";

    inter(str1, str2);
}