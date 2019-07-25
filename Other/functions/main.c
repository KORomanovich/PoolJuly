/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stobho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 20:34:01 by stobho            #+#    #+#             */
/*   Updated: 2019/07/08 20:19:19 by stobho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int ft_atoi(char *str);

int	main(void)
{
	char int_max[] = "2147483647";
	 char int_min[] = "-2147483648";
	  char int_max_plus[] = "21474836480";
	   char int_min_minus[] = "-21474836490";
	   char whitespaces[] = "  123";
	   printf("%d == %d\n",atoi(whitespaces),ft_atoi(whitespaces));
	  char whitespacesp[] = " ++123";
	        printf("%d == %d\n",atoi(whitespacesp),ft_atoi(whitespacesp)); 
	printf("%d\n",ft_atoi(int_max));
	printf("%d\n",atoi(int_max));
	printf("%d\n",ft_atoi(int_min));
	printf("%d\n",atoi(int_min));
	printf("%d\n",ft_atoi(int_min_minus));
	printf("%d\n",atoi(int_min_minus));
	printf("%d\n",ft_atoi(int_max_plus));
		    printf("%d\n",atoi(int_max_plus));

	return (0);
}
