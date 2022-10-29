/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:35:05 by anlima            #+#    #+#             */
/*   Updated: 2022/10/29 19:06:20 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wc(char const *s, char c)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i++ == 0)
			words++;
		else if (*s == c)
			i = 0;
		s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	l;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	strings = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1));
	if (!s || !strings)
		return (NULL);
	l = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			strings[l++] = ft_substr(s, i, j - i);
			i = j;
		}
	}
	strings[l] = 0;
	return (strings);
}
