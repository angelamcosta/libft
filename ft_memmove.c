/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:57:05 by anlima            #+#    #+#             */
/*   Updated: 2022/08/13 13:30:51 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	lend;
	int	lens;
	int	i;
	char *d;
	char *s;

	d = (char *)dest;
	s = (char *)src;
	lend = ft_strlen(d);
	lens = ft_strlen(s);
	if (lend > lens)
	{
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (n-- > i)
			d[n] = s[n];
	}
	return (dest);
}
