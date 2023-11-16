#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int i = 0;
	char c[10];
	long nbl = nb;
	
	if(nbl < 0)
	{
		ft_putchar('-');
		nbl *=-1;
	}
	
	if(nbl == 0)
	{
		ft_putchar('0');
	}

	while(nbl > 0)
	{
		c[i] = (nbl % 10) + 48;
		nbl /=10;
		i++;
	}
	i--;
	while(i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}

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
