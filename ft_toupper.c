/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:30:47 by anlima            #+#    #+#             */
/*   Updated: 2022/07/29 13:35:10 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("The char %c uppercased is %c", argv[1][0], ft_toupper(argv[1][0]));
}*/
