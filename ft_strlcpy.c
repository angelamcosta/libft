/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:34:17 by anlima            #+#    #+#             */
/*   Updated: 2022/08/13 14:25:51 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = -1;
	while(++i < size - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}
