/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:49:03 by anlima            #+#    #+#             */
/*   Updated: 2022/08/14 11:55:23 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int	i;

	subs = malloc(len + 1);
	if (!subs)
	{
		(void)i;
		return (NULL);
	}
	i = 0;
	while (s[start] && len-- > 0)
	{
		subs[i++] = s[start];
		start++;
	}
	return (subs);
}
