#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int *range;

    if(start > end)
    {
        range = (int *)malloc(sizeof(int) * (start -  end + 1));
    }
    else 
    {
        range = (int *)malloc(sizeof(int) * (end - start + 1));
    }

    if(range == NULL)
        return NULL;

    while(start != end)
    {
        range[i] = start;
        i++;
        if(start < end)
            start++;
        else
            start--;
    }
    range[i] = end;
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

