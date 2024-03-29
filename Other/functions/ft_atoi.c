/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stobho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:25:40 by stobho            #+#    #+#             */
/*   Updated: 2019/07/08 21:43:02 by stobho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int res;
	int i;
	int sign;

	res = 0;
	i = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
		if (str[i] == '+' | str[i] == '\r' | str[i] == '\f' || str[i] == '\a')
			i++;
		i++;
	}
	while (str[i] >= '0' & str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		++i;
	}
	return (res * sign);
}
