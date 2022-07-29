/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:24:17 by anlima            #+#    #+#             */
/*   Updated: 2022/07/29 23:39:06 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	temp;
	int	signal;

	signal = 1;
	temp = 0;

	while (*str <= 32)
		str++;
	if (*str == '-')
		signal *= -1;
	else if (*str == '+')
		signal *= 1;
	while(*str >= 48 && *str <= 57)
	{
		temp = temp * 10 + (*str - 48);
		str++;
	}
	return (temp * signal);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("meu atoi: %i", ft_atoi(argv[1]));
	printf("\natoi: %i", atoi(argv[1]));
}*/
