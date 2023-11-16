#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void last_word(char *str)
{
    int i = 0;
    int j;

    while(str[i])
    {
        if(str[i] == ' ' && str[i+1] >= 33 && str[i+1] <= 126)
        {
            j = i+1;
        }
        i++;
    }
    while(str[j] >= 33 && str[j] <= 126)
    {
        ft_putchar(str[j]);
        j++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        last_word(argv[1]);
        ft_putchar('\n');
    }
    ft_putchar('\n');
}




