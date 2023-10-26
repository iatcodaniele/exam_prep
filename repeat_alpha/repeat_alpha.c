#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int get_index(char c)
{
    int repeat;

    if(c >= 'a' && c <= 'z')
    {
        repeat = c - 'a' + 1;
    }
    else if(c >= 'A' && c <= 'Z')
    {
        repeat = c - 'A' + 1;
    }
    else
        repeat = 1;
    return (repeat);
}

int main(int argc, char **argv)
{
    int repeat;

    if(argc == 2)
    {
        while(*argv[1])
        {
            repeat = get_index(*argv[1]);
            while(repeat--)
                write(1, argv[1], 1);
            argv[1]++;
        }
    }
    ft_putchar('\n');
}

/*

int		letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int ac, char **av)
{
	int	repeat;

	if (ac == 2)
	{
		while (*av[1])
		{
			repeat = letter_count(*av[1]);
			while (repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	ft_putchar('\n');
}
*/
