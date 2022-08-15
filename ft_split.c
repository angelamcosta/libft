/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:35:58 by anlima            #+#    #+#             */
/*   Updated: 2022/08/15 12:11:38 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_alloc(char *s, int i, int j)
{
	char	*str;
	int	k;

	k = 0;
	str = (char *)malloc(i - j + 1);
	if (!str)
		return (0);
	while (j < i)
		str[k++] = s[j++];
	str[k] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char **strl;
	int	i;
	int	j;
	int	k;

	strl = (char **)malloc(ft_charnumber((char *)s, c) + 2);
	if (!strl)
		return (0);
	i = -1;
	j = 0;
	k = 0;
	while (s[++i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			if (s[i + 1] == '\0')
				i++;
			strl[k++] = ft_alloc((char *)s, i, j);
			j = i + 1;
		}
	}
	strl[k] = '\0';
	return (strl);
}

#include <stdio.h>

int	main(void)
{
	char **strl = ft_split("guga,lela,clari,gonas", ',');
	for (int i = 0; i < 4; i++)
		printf("%s", strl[i]);
	free(strl);
}
