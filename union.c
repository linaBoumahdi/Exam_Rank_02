/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:34:54 by lboumahd          #+#    #+#             */
/*   Updated: 2024/05/30 16:35:57 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_tab(int *tab, char c_str_2)
{
	if (tab[(int)c_str_2] == 0)
	{
		ft_putchar(c_str_2);
		tab[(int)c_str_2] = 1;
	}
}

void	ft_union(char *str_1, char *str_2)
{
	int	idx;
	int	tab[256];

	idx = 0;
	while (idx <= 256)
	{
		tab[idx] = 0;
		idx++;
	}
	idx = 0;
	while (str_1[idx] != '\0')
	{
		check_tab(tab, str_1[idx]);
		idx++;
	}
	idx = 0;
	while (str_2[idx] != '\0')
	{
		check_ascii_tab(tab, str_2[idx]);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
