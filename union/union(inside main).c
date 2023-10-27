#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i = 1;
	int	j;
	int	tab[256] = {0}; //all ASCII characters initialized at 0
	if (argc == 3)
//	while (argv[1][i])
    while (i < argc) //i index of arguments
	{
		j = 0; //j index for words inside argument; set to zero every time for next word
		while (argv[i][j])
		{
			if (tab[(int)argv[i][j]] == 0) //index takes ASCII value of letter
            {						//if its zero, it has not been found yet
                tab[(int)argv[i][j]] = 1;  //becomes one if it has been found
				write (1, &argv[i][j], 1);
            }
			j++;
		}
		i++;
	}

	write(1, "\n", 1);
	return (0);
}
