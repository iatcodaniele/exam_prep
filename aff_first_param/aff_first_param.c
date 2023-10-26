#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i = 0;
    
    if(argc > 1)
    {
	    while(argv[1][i])
	    {
		    ft_putchar(argv[1][i]); //iterates though the first argument and displays it
		    i++;
	    }
    }
    ft_putchar('\n');
    return 0;
}
