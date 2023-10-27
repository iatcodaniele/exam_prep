#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
/*
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
*/

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        while(*argv[1])
        {
            if(*argv[1] >= 'a' && *argv[1] <= 'z')
            {
                *argv[1] -= 32;   //if its lowercase, make uppercase
                ft_putchar(*argv[1]);
            }
            else if(*argv[1] >= 'A' && *argv[1] <= 'Z')
            {
                *argv[1] += 32;  //if its uppercase, make lowercase
                ft_putchar(*argv[1]);
            }
            else
            	ft_putchar(*argv[1]); //if any other character, print as it is
            argv[1]++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
