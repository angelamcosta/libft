/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:24:17 by anlima            #+#    #+#             */
/*   Updated: 2022/10/03 16:56:58 by anlima           ###   ########.fr       */
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
	while (*str >= 48 && *str <= 57)
	{
		temp = temp * 10 + (*str - 48);
		str++;
	}
	return (temp * signal);
}
