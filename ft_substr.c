/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:49:03 by anlima            #+#    #+#             */
/*   Updated: 2022/10/26 13:52:32 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen((char *)&s[start]))
		len = ft_strlen((char *)&s[start]);
	subs = (char *)malloc(len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		subs[i++] = s[start++];
	subs[i] = '\0';
	return (subs);
}
