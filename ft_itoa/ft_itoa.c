#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
int size(long nb)
{
    int i = 0;
    if(nb < 0)
    {
        nb*= -1;
        i++;
    }
    while(nb > 0)
    {
        nb/=10;
        i++;
    }
    return i;
}

char *ft_itoa(int nbr)
{
    int i = size(nbr);
    long nbl = nbr;
    char *array;

    array = (char *)malloc(i + 1);
    if(!array)
        return NULL;
    
    if(nbl == 0)
    {
        array[0] = '0';
        array[1] = '\0';
        return array;
    }
    if(nbl < 0)
    {
        array[0] = '-';
        nbl*=-1;
    }
    array[i] = '\0';
    i--;
    while(nbl > 0)
    {
        array[i] = (nbl % 10) + '0';
        nbl/=10;
        i--;
    }
    return array;
}

int main()
{
    printf("%s\n", ft_itoa(INT_MAX));
    printf("%s\n", ft_itoa(INT_MIN));
    printf("%s\n", ft_itoa(42));
    printf("%s\n", ft_itoa(-42));
    printf("%s\n", ft_itoa(0));
}

