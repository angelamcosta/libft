/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:56:00 by anlima            #+#    #+#             */
/*   Updated: 2022/10/16 16:16:37 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i;

	i = 0;
	joined = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!joined)
		return (NULL);
	while (joined[i] && *s1)
		joined[i++] = *s1++;
	while (joined[i] && *s2)
		joined[i++] = *s2++;
	joined[i] = '\0';
	return (joined);
}
