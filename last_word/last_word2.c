#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i =0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 0;
	int j;

	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] == ' ' && argv[1][i+1] >= 33 && argv[1][i+1] <= 126)
			{	
					j = i + 1;
			}
			i++;
		}
		
		while(argv[1][j] != '\0' && argv[1][j] >= 33 && argv[1][j] <= 126)
		{
			ft_putchar(argv[1][j]);
			j++;
		}
	}
	ft_putchar('\n');
}
