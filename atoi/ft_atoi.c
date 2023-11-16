//actual atoi function that converts the first portion of the string to integer
//for piscine exam function check ft_stoi(exam_specific)
//it handles all spaces, not only the ones at the beginning of string like original atoi

int is_space(char c)
{
    if(c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v' || c == '\f' || c == '\b')
    {
        return 1;
    }
    return 0;
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while(is_space(str[i]) == 1) //skips spaces
    {
        i++;
    }
       
    while(str[i] == '-' || str[i] == '+') //handles negative numbers
    {
        if(str[i++] == '-')
        {
            sign *= -1;
        }
    }
    while(str[i]!= '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10;
            res = res + (str[i++] - 48); //res gets filled with the converted numbers
        }
        else
            return (res * sign); //number * sign to determine if its a positive or negative number
    }
    return (res * sign);
}

#include <stdio.h>
#include <stdlib.h> //check original atoi function against your own
int main()
{	
	printf("%d\n", ft_atoi("0")); //0
	
	printf("%d\n", ft_atoi("  42")); //42

	printf("%d\n", ft_atoi("-42")); //-42
	
	printf("%d\n", ft_atoi("   falafel 42")); //0
	 
	printf("%d\n", ft_atoi("2147 483647")); //2147
	
	printf("%d\n", ft_atoi("-2147483648")); //-2147483648
	
	printf("%d\n", ft_atoi("7a6")); //7
	
	printf("%d\n", ft_atoi("++++42")); //0
	
	printf("%d\n", ft_atoi("-+-+-42")); //0
	
	printf("%d\n", ft_atoi("\t\n 4200a")); //0
}
