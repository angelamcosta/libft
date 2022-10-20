/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:49:03 by anlima            #+#    #+#             */
/*   Updated: 2022/10/20 09:01:06 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	lens;

	if (!s)
		return (NULL);
	lens = ft_strlen((char *)s);
	if (len > lens)
		len = lens;
	subs = (char *)malloc(len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	if (start < lens)
	{
		while (s[start] && i < len)
		subs[i++] = s[start++];
	}
	subs[i] = '\0';
	return (subs);
}
