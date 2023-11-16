#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if(argc > 1)
	{
		while(i < argc)
		{
			while(argv[i][j])
			{
				if(argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				{
					argv[i][j] +=32;
				}
				if((argv[i][j+1] == '\0' || argv[i][j+1] == ' ') && (argv[i][j] >= 'a' && argv[i][j] <= 'z'))
				{
					argv[i][j] -=32;
					ft_putchar(argv[i][j]);
				}
				else
					ft_putchar(argv[i][j]);
				j++;
			}
		i++;
		}
	}
	ft_putchar('\n');
}
