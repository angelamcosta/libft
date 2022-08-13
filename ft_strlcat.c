/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:32:12 by anlima            #+#    #+#             */
/*   Updated: 2022/08/13 15:23:23 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat	(char *dst, const char *src, size_t size)
{
	int	lend;
	int	lens;
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
