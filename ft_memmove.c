/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:48:36 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/10/31 08:19:22 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;
	size_t			y;

	if (!dst && !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = len - 1;
	if (d <= s)
		ft_memcpy(d, s, len);
	else
	{
		y = 0;
		while (y < len)
		{
			d[i] = s[i];
			i--;
			y++;
		}
	}
	return (dst);
}
