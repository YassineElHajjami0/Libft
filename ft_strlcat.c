/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:17:00 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/11/01 12:12:45 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	if (!dst && dstsize <= 0)
		return (0);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (dstsize <= d)
		return (dstsize + s);
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - d - 1)
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
	}
	return (d + s);
}
