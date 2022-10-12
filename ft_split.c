/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:35:05 by anlima            #+#    #+#             */
/*   Updated: 2022/10/12 11:36:33 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(char const *s, char c)
{
	int		i;
	int		j;
	int		words;

	i = -1;
	j = 0;
	words = 0;
	while (s[++i])
	{
		if (s[i] == c)
		{
			if (i - j > 1)
				words++;
			j = i;
		}
	}
	return (words);
}

static char	*ft_newstring(char const *s, int i, int j)
{
	char	*subs;
	int		k;

	subs = malloc(j - i + 1);
	if (!subs)
		return (NULL);
	k = 0;
	while (s[i] && i < j)
		subs[k++] = s[i++];
	subs[k] = '\0';
	return (subs);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		l;
	int		i;
	int		j;

	while (*s && *s == c)
		s++;
	strings = (char **)malloc(sizeof(char *) * ft_wordcounter(s, c) + 1);
	if (!s || !strings)
		return (NULL);
	i = -1;
	j = 0;
	l = 0;
	while (s[++i])
	{
		if (s[i] == c)
		{
			if (i - j > 0)
				strings[l] = ft_newstring(s, j, i);
			j = i + 1;
		}
	}
	strings[l] = 0;
	return (strings);
}
