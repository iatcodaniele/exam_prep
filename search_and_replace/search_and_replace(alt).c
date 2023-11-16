#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if(argc == 4)
    {
    	if(argv[2][1] != '\0' || argv[3][1] != '\0') //check if 2nd and 3rd arguments are letters
    	{	
    		ft_putchar('\n');
    		return 0;
    	}
    	
        while(*argv[1])
        {
            if(argv[2][0] == *argv[1]) //if one of the characters in the first argument 
            {                            //is the same as the second argument
                *argv[1] = argv[3][0];    //gets replaced by the letter in the third argument
            }
            ft_putchar(*argv[1]);
            argv[1]++;
        }
    }
    ft_putchar('\n');
}
