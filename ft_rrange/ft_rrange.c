#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int *range;

    if(end > start)
        range = (int*)malloc(sizeof(int) *(end - start + 1));
    else   
        range = (int*)malloc(sizeof(int) * (start - end + 1));

    if(range == NULL)
        return NULL;

    while(end != start)
    {
        range[i] = end;
        i++;
        if(end > start)
            end--;
        else
            end++;
    }
    range[i] = start;
    return range;
}

int main()
{
    int i = 0;
    int *p;

    p = ft_range(0,5);
    while(i < 6)
    {
        printf("%d\n", p[i]);
        i++;
    }
    return 0;
}