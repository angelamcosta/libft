/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:33:27 by anlima            #+#    #+#             */
/*   Updated: 2022/10/26 15:38:55 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*arr;

	if (2147483647 / size < num)
		return (NULL);
	arr = (void *)malloc(size * num);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * num);
	return (arr);
}
