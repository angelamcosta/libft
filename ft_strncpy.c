/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:53:08 by anlima            #+#    #+#             */
/*   Updated: 2022/07/28 10:56:24 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char dest[100];
	if (argc == 2)
		printf("The string 'dest' is equal to: %s\n", ft_strncpy(dest, argv[1], 3));
}*/
