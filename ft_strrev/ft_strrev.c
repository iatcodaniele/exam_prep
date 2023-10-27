int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strrev(char *str)
{
    int start = 0;
    int end = ft_strlen(str) - 1; //-1 to exclude the null byte
    char temp;

    while(str[start] < str[end]) //swap function to invert the position
    {                            //of the first elements to that of the last
           temp = str[start];
           str[start] = str[end];
           str[end] = temp;
           start++;
           end--;
    }
    return (str);
}
//an even number of letters in a word leads to it not swapping the middle ones
#include <stdio.h>
int main()
{
    char x[] = "start"; 
    //the function is a pointer so you can't just have printf("string") = segfault
    //always have a separate variable
    printf("%s", ft_strrev(x));
}
