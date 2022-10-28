/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:24:17 by anlima            #+#    #+#             */
/*   Updated: 2022/10/28 11:12:59 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long int	temp;
	int			signal;

	signal = 1;
	temp = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
	{
		signal *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		temp = temp * 10 + (*str++ - 48);
		if (temp > 2147483648)
			break ;
	}
	if ((temp * signal) == ((int)temp * signal))
		return ((int)temp * signal);
	else if (temp * signal > 0)
		return (-1);
	return (0);
}
