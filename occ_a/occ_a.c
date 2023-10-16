#include <stdio.h>

int occ_a(char *str)
{
    int t = 0;
    int i = 0;

    while(str[i])
    {
        if(str[i] == 'A')
        {
            t++;
        }
        i++;
    }
    return t;
}

int main()
{
    char x = "ahAAAAAA";
    printf("%d", occ_a(x));

}