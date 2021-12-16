#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		count;

	count = argc - 1;
	while (count > 0)
	{
		i = 0;
		while (argv[count][i])
		{
			write(1, &argv[count][i], 1);
			i++;
		}
		write(1, "\n", 1);
		count--;
	}
	return (0);
}