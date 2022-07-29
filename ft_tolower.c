/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:21:01 by anlima            #+#    #+#             */
/*   Updated: 2022/07/29 14:27:24 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("The char %c after tolower became %c", argv[1][0], ft_tolower(argv[1][0]));
}*/
