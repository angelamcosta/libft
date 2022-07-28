/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima anlima@student.42lisboa.com         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:08:59 by anlima            #+#    #+#             */
/*   Updated: 2022/07/28 12:30:12 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = -1;
	while (dest[len])
		len++;
	while (src[++i])
		dest[len + i] = src[i];
	dest[len + 1] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	dest[100] = "gugonas";
	if (argc == 2)
		printf("%s", printf(dest, argv[1]));
}*/
