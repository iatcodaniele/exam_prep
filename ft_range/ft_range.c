#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int *range;

    if(start > end)
    {
        range = (int *)malloc(sizeof(int) * (start -  end + 1));  //malloc size depends on positive/negatve range
    }
    else 
    {
        range = (int *)malloc(sizeof(int) * (end - start + 1));
    }

    if(range == NULL)
        return NULL;

    while(start != end)
    {
        range[i] = start; //index 0 takes the value of starting number
        i++;             //iterates until it reaches the ending number
        if(start < end)
            start++; 
        else
            start--; //if starting number is bigger than ending number, iterate backwards
    }               //ex: (5 - 2) {5, 4, 3, 2} //index is the position in your array, don't confuse it with values
    range[i] = end; //similar to '\0'
    return range;
}

int main()
{
    int i = 0;
    int *p;

    p = ft_range(5,0);
    while(i < 6)
    {
        printf("%d", p[i]);
        i++;
    }
    return 0;
}

