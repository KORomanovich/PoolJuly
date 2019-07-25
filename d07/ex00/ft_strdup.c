/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stobho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:01:17 by stobho            #+#    #+#             */
/*   Updated: 2019/07/11 15:03:40 by stobho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char		*ft_strdup(char *src)
{
	char	*dump;
	int		size;
	int		i;

	size = ft_strlen(src) + 1;
	dump = (char *)malloc(sizeof(*dump) * (size));
	if (NULL == dump)
		return (00);
	i = 0;
	while (i < size)
	{
		dump[i] = src[i];
		i++;
	}
	return (dump);
}
