/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:18:13 by anlima            #+#    #+#             */
/*   Updated: 2022/08/13 15:47:48 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lens;

	lens = ft_strlen((char *)s);
	while (--lens >= 0)
	{
		if (s[lens] == c)
			return ((char *)&s[lens]);
	}	
	return (0);
}
