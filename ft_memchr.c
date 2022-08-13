/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:48:59 by anlima            #+#    #+#             */
/*   Updated: 2022/08/13 15:55:41 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	char *str;

	i = -1;
	str = (char *)s;
	while (++i < n)
	{
		if (str[i] == c)
			return (&str[i]);
	}
	return (0);
}
