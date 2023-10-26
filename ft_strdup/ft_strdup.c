#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i = 0;
    int lenght = 0;
    char *dup;

    while(src[lenght])
    {
        lenght++;
    }

    dup = (char *)malloc(lenght + 1);  //datatype we're allocating memory for)
    if(dup != NULL)                    //malloc(sizeof(amount of bytes we're allocating)
    {
         while(src[i])
        {
            dup[i] = src[i];       //copying from our original string to the duplicate in heap
            i++;
        }
        dup[i] = '\0';
    }
   return dup;
}
#include <stdio.h>
int main(int argc, char **argv)
{
    int i = 0;
    if(argc == 2)
    {
        printf("%s", ft_strdup(argv[1]));
    }
    return 0;
}
