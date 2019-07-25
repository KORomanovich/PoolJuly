/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stobho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 22:48:58 by stobho            #+#    #+#             */
/*   Updated: 2019/07/10 23:46:11 by stobho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printStryng(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int args ,char **argv)
{
	int	i;

	i = 1;
	//if (args)
	while(argv[i] && args > i)
	{
		printStryng(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

