/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:08:22 by anlima            #+#    #+#             */
/*   Updated: 2022/07/29 13:12:50 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int c;
	if (argc == 2)
	{
		c = argv[1][0];
		printf("The char %c isdigit prints: %i", argv[1][0], ft_isdigit(c));
	}
}*/
