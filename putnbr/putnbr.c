#include <unistd.h>

void    ft_putnbr(int nb)
{
    long nbl = nb; //handles integer limits
    int i = 0;
    char c[10]; //max integer has 10 digits

    if(nbl == 0)
    {
        write(1, "0", 1);
    }
    else if(nbl < 0)
    {
        write(1, "-", 1);
        nbl = -nbl;
    }
    while(nbl > 0)
    {
        c[i] = (nbl % 10) + 48; //storing the number backwards by doing modulo
        nbl = nbl / 10; //discarding the number we just stored
        i++;//iterates until and including null
    }
    i--; //going back -1 to re-enter string
    while( i >= 0)
    {
        write(1, &c[i], 1); //printing the string backwards
        i--;                //so that the original number is displayed correctly
    }
}

#include <stdio.h>
int main()
{
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(-42);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
}
