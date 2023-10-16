#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rot13(char *str)
{
    int i = 0;

    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
        {
            str[i] = str[i] + 13;
        }
        if((str[i] >= 'm' && str[i] <= 'z') || (str[i] >= 'M' && str[i] <= 'Z'))
        {
            str[i] = str[i] - 13;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        rot13(argv[1]);
        while(*argv[1])
        {
            ft_putchar(*argv[1]);
            argv[1]++;
        }
        ft_putchar('\n');
    }
    ft_putchar('\n');
    return 0;
}