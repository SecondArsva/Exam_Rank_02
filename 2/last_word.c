#include <unistd.h>

int	ft_find_first(char **argv, int i)
{
	while (i >= 0 && argv[1][i] != ' ')
		i--;
	return (i + 1);
}

int	ft_find_last(char **argv, int i)
{
	while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\0'))
		i--;
	return (i);
}

int	ft_find_null(char **argv, int i)
{
	while (argv[1][i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc == 2)
	{
		i = ft_find_null(argv, i);
		i = ft_find_last(argv, i);
		if (i == 0 || argv[1][i - 1] == ' ')
			return (write (1, "\n", 1), 0);
		j = ft_find_first(argv, i);
		while (j <= i)
		{
			write (1, &argv[1][j], 1);
			j++;
		}
	}
	return (write(1, "\n", 1), 0);
}
