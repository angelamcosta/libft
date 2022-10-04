/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:32:12 by anlima            #+#    #+#             */
/*   Updated: 2022/10/04 10:25:00 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	int	i;

	lend = ft_strlen(dst);
	lens = ft_strlen((char *)src);
	if (lens < size)
	{
		i = -1;
		while (++i + lend < size - 1)
			dst[lend + i] = src[i];
		dst[lend + i] = '\0';
		return (lend + lens);
	}
	(void)i;
	return (lens + size);	
}
