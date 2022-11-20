/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:01:23 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/11/01 12:53:01 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (size != 0 && count * size / size != count)
		return (NULL);
	p = (char *)malloc(size * count);
	if (!p)
		return (NULL);
	ft_memset(p, 0, size * count);
	return ((void *)p);
}
