#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*void    search_and_replace(char *str, char a, char b)
{
    int i = 0;
    while(str[i]!= '\0')
    {
        if(str[i] == a)
        {
            str[i] = b;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        search_and_replace(argv[1], *argv[2], *argv[3]);
        while(*argv[1])
        {
            ft_putchar(*argv[1]);
            argv[1]++;
        }
    
    }
    ft_putchar('\n');
} */

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        while(*argv[1])
        {
            if(argv[2][0] == *argv[1])
            {
                *argv[1] = argv[3][0];
            }
            ft_putchar(*argv[1]);
            argv[1]++;
        }
    }
    ft_putchar('\n');
}