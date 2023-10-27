#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;
	int	tab[256] = {0}; //array of all ASCII characters, initialized with zeros
	if (argc == 3)
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j]) //if a match is found
			{
				if (tab[(int)argv[2][j]] == 0) //if the match has not been found before
				{
					tab[(int)argv[2][j]] = 1; //set it to 1 = found
					write (1, &argv[1][i], 1);
				}
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
