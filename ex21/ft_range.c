/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:27:06 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/05 17:27:59 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	if (min >= max)
		return (0);
	str = (int *)malloc(sizeof(int) * (max - min));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
