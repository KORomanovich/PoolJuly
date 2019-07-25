/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stobho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:08:18 by stobho            #+#    #+#             */
/*   Updated: 2019/07/11 16:09:48 by stobho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int*)malloc(sizeof(**range) * size);
	if (NULL == *range)
		return (00);
	i = 0;
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
