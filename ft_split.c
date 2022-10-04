/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:35:58 by anlima            #+#    #+#             */
/*   Updated: 2022/10/03 16:41:03 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *word = "a,,,,,,b,,,,,,,c";
	int i = 0;
	int j = 0;
	int cont = 0;
	while (word[i])
	{
		if (word[i] == ',')
			i++;
		else
		{
			j = i;
			while (word[i+1] != ',')
			{
				i++;
				cont++;
			}
			printf(ft_substr(word, j, cont));
		}
	}
}
