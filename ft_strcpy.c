/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:49:24 by anlima            #+#    #+#             */
/*   Updated: 2022/07/27 15:54:32 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char dest[100];

	if (argc == 2)
		printf("The string 'dest' is equal to: %s", strcpy(dest, argv[1]));
}*/
