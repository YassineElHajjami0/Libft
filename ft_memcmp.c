/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:49:17 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/10/28 12:36:07 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				r;
	unsigned char	*p;
	unsigned char	*b;
	size_t			i;

	r = 0;
	p = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p[i] != b[i])
			return (r = p[i] - b[i]);
		i++;
	}
	return (r);
}
