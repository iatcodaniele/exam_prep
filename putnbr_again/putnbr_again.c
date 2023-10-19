#include <unistd.h>

void    ft_putnbr(int nb)
{
    long nbl = nb;
    int i = 0;
    char c[10];

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
        c[i] = (nbl % 10) + 48;
        nbl = nbl / 10;
        i++;
    }
    i--;
    while( i >= 0)
    {
        write(1, &c[i], 1);
        i--;
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