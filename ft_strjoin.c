/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:56:00 by anlima            #+#    #+#             */
/*   Updated: 2022/10/11 09:53:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	add_str(char *joined, char *s, int i)
{
	while (*s)
		joined[i++] = *s++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i;

	joined = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!joined)
		return (NULL);
	i = add_str(joined, (char *)s1, 0);
	i = add_str(joined, (char *)s2, i);
	joined[i] = '\0';
	return (joined);
}
