#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ulstr(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    if(argc == 2)
    {
        ulstr(argv[1]);
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
