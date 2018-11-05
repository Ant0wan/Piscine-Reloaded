/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:44:31 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/05 18:47:52 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) && *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

void	ft_putargv(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		n;
	int		diff;
	char	*s_tmp;

	diff = 1;
	while (diff == 1)
	{
		diff = 0;
		n = 1;
		while (n < argc)
		{
			if (ft_strcmp(argv[n - 1], argv[n]) > 0)
			{
				s_tmp = argv[n - 1];
				argv[n - 1] = argv[n];
				argv[n] = s_tmp;
				diff = 1;
			}
			n++;
		}
	}
	ft_putargv(argc, argv);
	return (0);
}
