#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i = 1;
	int	j;
	int	tab[256] = {0};
	if (argc == 3)
//	while (argv[1][i])
    while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (tab[(int)argv[i][j]] == 0)
            {
                tab[(int)argv[i][j]] = 1;
				write (1, &argv[i][j], 1);
            }
			j++;
		}
		i++;
	}

	write(1, "\n", 1);
	return (0);
}