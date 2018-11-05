/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:46:16 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/05 16:53:19 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*(str + count))
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	cpy = (char*)malloc(sizeof(*cpy) * (ft_strlen(src) + 1));
	if (cpy == NULL)
		return ((void*)0);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
