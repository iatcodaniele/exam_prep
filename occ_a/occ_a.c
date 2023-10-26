#include <stdio.h>

int occ_a(char *str)
{
    int t = 0;
    int i = 0;

    while(str[i])
    {
        if(str[i] == 'A')
        {
            t++; //t increases only when the 'a' character is found
        }
        i++;
    }
    return t; //returning number of occurences of 'a'
}

int main()
{
    char x = "ahAAAAAA";
    printf("%d", occ_a(x));

}
