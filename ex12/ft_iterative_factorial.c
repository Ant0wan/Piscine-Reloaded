/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:09:37 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/05 16:10:54 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 0;
	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb < 13)
	{
		while (i++ < nb - 1)
			result = result * i;
		return (result);
	}
	return (0);
}
