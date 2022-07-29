/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:59:57 by anlima            #+#    #+#             */
/*   Updated: 2022/07/29 23:32:10 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s", ft_strchr("camisa", 's'));
}*/
