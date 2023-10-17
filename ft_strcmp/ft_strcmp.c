int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i])
    {
        if(s1[i] == s2[i])
        {
            return s1[i] - s2[i];
        }
    i++;
    }
}

/*int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }
    return s1[i] - s2[i];

}*/
#include <stdio.h>
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        printf("%d", ft_strcmp(argv[1], argv[2]));
    }
}

//BOTH WORK