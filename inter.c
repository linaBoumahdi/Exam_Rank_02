#include <unistd.h>	

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_ascii_tab(int *tab, char c)
{
	if (tab[(int)c] == 1)
	{
		tab[(int)c] = 0;
		ft_putchar(c);
	}
}

void	inter(char *str_1, char *str_2)
{
	int	idx;
	int	tab[256];

	idx = 0;
	while (str_2[idx] != '\0')
	{
		tab[(int)str_2[idx]] = 1;
		idx++;
	}
	idx = 0;
	while (str_1[idx] != '\0')
	{
		check_ascii_tab(tab, str_1[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
