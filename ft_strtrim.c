/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:14:14 by anlima            #+#    #+#             */
/*   Updated: 2022/08/14 12:46:17 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	lentrim;
	int	i;
	int	j;
	char	*strc;

	lentrim = 0;
	i = -1;
	while (set[++i])
		lentrim += charnumber((char *)s1, set[i]);
	strc = malloc(ft_strlen((char *)s1) - lentrim + 1);
	if (!strc)
	{
		(void)j;
		return (0);
	}
	j = 0;
	while (*s1)
	{
		i = -1;
		while (set[++i])
		{
			if (set[i] == *s1)
				break;
		}
		if (set[i] == '\0')
			strc[j++] = *s1;
		s1++;
	}
	strc[j] = '\0';
	return (strc);
}
