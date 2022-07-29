/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:50:28 by anlima            #+#    #+#             */
/*   Updated: 2022/07/30 00:19:44 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	aux_func(char *h, char *n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (h[i] && n[j])
	{
		if (h[i++] != n[j++])
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *haystack, char *needle)
{
	int	i;

	i = 0;
	while (haystack[i])
	{
		if (aux_func(&haystack[i], needle) == 1)
			return (&haystack[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s", ft_strstr("aazul", "azul"));
}*/
