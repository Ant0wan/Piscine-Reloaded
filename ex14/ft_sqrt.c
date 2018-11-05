/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:13:19 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/05 16:13:41 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	while (sqrt * sqrt < nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}