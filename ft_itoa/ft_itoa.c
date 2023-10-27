#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
int size(long nb)
{
    int i = 0;
    if(nb < 0)
    {
        nb*= -1; //turn neg number positive 
        i++; //incremented to include minus sign
    }
    while(nb > 0)
    {
        nb/=10; //shifts the digits one place to the right
        i++; //counts how many times the loop runs => total digits
    }
    return i;
}

char *ft_itoa(int nbr)
{
    int i = size(nbr);
    long nbl = nbr; //type long to accomodate INT_MIN
    char *array;

    array = (char *)malloc(i + 1); //allocating to char type with size: number length + 1 for the null
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
        array[0] = '-'; //stores the minus sign
        nbl*=-1;        //followed by the positive (effectively storing it as negative)
    }
    array[i] = '\0'; //end of allocated array
    i--; //exits the null char
    while(nbl > 0)
    {
        array[i] = (nbl % 10) + '0'; //stores the rightmost digits
        nbl/=10; //removes the rightmost digit
        i--; //decrementing i to get the next position for next digit
    }        //it goes backwards, storing from right to left -> we store the rightmost digits inside decreasing index
    return array;
} //different from putnbr because index starts at the end of string so we don't need to reverse it afterwards like in putnbr

int main()
{
    printf("%s\n", ft_itoa(INT_MAX));
    printf("%s\n", ft_itoa(INT_MIN));
    printf("%s\n", ft_itoa(42));
    printf("%s\n", ft_itoa(-42));
    printf("%s\n", ft_itoa(0));
}

