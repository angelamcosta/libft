/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:18:13 by anlima            #+#    #+#             */
/*   Updated: 2022/10/26 12:48:20 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lens;

	lens = ft_strlen((char *)s);
	while (lens > 0 && (unsigned char)s[lens] != (unsigned char)c)
		lens--;
	if ((unsigned char)s[lens] == (unsigned char)c)
		return ((char *)&s[lens]);
	return (0);
}
