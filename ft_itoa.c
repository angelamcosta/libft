/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:34:41 by anlima            #+#    #+#             */
/*   Updated: 2022/10/06 10:23:30 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcount(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10 > 0 && i++)
		n = n / 10;
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_charcount(n) + 1;
	if (n < 0)
		n *= -1;
	str = (char *)malloc(len);
	if (!str)
		return (0);
	str[--len] = '\0';
	while (--len >= 0)
	{
		if (len == 0 && n == 0)
			str[len] = '-';
		else
		{
			str[len] = n % 10 + 48;
			n = n / 10;
		}
	}
	return (str);
}
