/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stobho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 21:30:36 by stobho            #+#    #+#             */
/*   Updated: 2019/07/17 21:56:55 by stobho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *str;

	str = malloc(sizeof(t_list));
	if (NULL == str)
		return (00);
	str - > next = NULL;
	str - > data = data;
	return (str);
}
