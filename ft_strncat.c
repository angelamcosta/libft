/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:36:02 by anlima            #+#    #+#             */
/*   Updated: 2022/07/29 23:21:30 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int n)
{
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = -1;
	while (src[++i] && i < n)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	dest[100] = "vai dar";
	printf("%s", ft_strncat(dest, " bom, confia.", 4));
}*/
