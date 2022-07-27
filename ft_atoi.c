/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:24:17 by anlima            #+#    #+#             */
/*   Updated: 2022/07/23 20:31:21 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	temp;
	int	i;
	int	signal;

	i = 0;
	signal = 1;
	temp = 0;
	while (str[i])
	{
		if (i == 0 && str[i] == '-')
			signal *= -1;
		else if (i == 0 && str[i] == '+')
			signal *= 1;
		else if (str[i] >= 48 && str[i] <= 57)
			temp = temp * 10 + str[i] - 48;
		else
			break ;
		i++;
	}
	return (temp * signal);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%i", ft_atoi(argv[1]));
}*/
