#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


int main(int argc, char **argv)
{
    int i = 0;
    if(argc == 2)
    {
        while(argv[1][i] && argv[1][i] == ' ' || argv[1][i] == '\t') /*iterates through whole string*/
        {
            i++;
        }
        while(argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t') /*iterates through string until it finds a space or tab*/
        {
            ft_putchar(argv[1][i]);
            i++;
        }
        
    }
    ft_putchar('\n');
}