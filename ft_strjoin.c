/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:56:00 by anlima            #+#    #+#             */
/*   Updated: 2022/08/14 12:13:41 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	add_str(char *joined, char *s, int i)
{
	while (*s)
	{
		joined[i++] = *s;
		s++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int	i;

	joined = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!joined)
	{
		(void)i;
		return (0);
	}
	i = add_str(joined, (char *)s1, 0);
	i = add_str(joined, (char *)s2, i);
	joined[i] = '\0';
	return (joined);
}
