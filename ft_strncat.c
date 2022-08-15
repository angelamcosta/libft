/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:36:02 by anlima            #+#    #+#             */
/*   Updated: 2022/08/06 18:45:16 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int n)
{
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = -1;
	while (src[++i] && i < n)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}