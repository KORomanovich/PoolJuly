/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stobho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 10:28:27 by stobho            #+#    #+#             */
/*   Updated: 2019/07/08 16:48:32 by stobho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int un_nb;

	un_nb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		un_nb = nb * -1;
	}
	if (un_nb >= 10)
		ft_putnbr(un_nb / 10);
	ft_putchar((un_nb % 10) + 48);
}
