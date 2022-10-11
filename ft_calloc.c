/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:33:27 by anlima            #+#    #+#             */
/*   Updated: 2022/10/10 16:15:00 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*arr;

	arr = (void *)malloc(sizeof(size) * num);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * num);
	return (arr);
}
