/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:14:14 by anlima            #+#    #+#             */
/*   Updated: 2022/10/04 10:19:16 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_charset(char c, char *set)
{
	int	i;
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int	x;
	int	y;
	int	i;
	x = 0;
	i = 0;
	while (set[x] && ft_charset(set[x], (char *)set))
		x++;
	y = ft_strlen((char *)s1);
	while (set[y - 1] && ft_charset(set[y - 1], (char *)set))
		y--;
	s2 = (char *)malloc(sizeof(char) * y - x + 1);
	while (s1[x] && x < y)
	{
		s2[i++] = s1[x++];
	}
	s2[i] = '\0';
	return (s2);
}
