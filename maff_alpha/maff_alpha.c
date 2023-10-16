#include <unistd.h>

int main()
{
    write(1, "aBcDeFGhIjKlMnOpQrStUvWxYz\n", 27);
    return (0);
}

//tried to be clever here
/*
#include <stdio.h>

char str_capitalize(char *str)
{
    int i = 0;
    str[0] = 'a';

    while(str[i] <= 'z')
    {
        if(str[i] % 2 == 0)
        {
            str[i] = str[i] - 32;
        }
        else
            i++;
    }
    return *str;
} 

int main()
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";

    printf("%c", str_capitalize(str));

}
*/
