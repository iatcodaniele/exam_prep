#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	
	if(argc == 3)
	{
		while(argv[2][j]) //checking the 2nd string for characters to use to write the 1st
		{
			if(argv[2][j] == argv[1][i]) //if any are found, enter condition
			{
				i++;
				if(!argv[1][i]) //if the 1st string ends
				{
					ft_putstr(argv[1]);  //display the string of characters in common 
 					break;
				}
			}
			j++; //if the char is no match, move ahead to next character
		}
	}
	write(1, "\n", 1);
	return 0;
}
		
