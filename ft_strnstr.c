/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:26:52 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/10/28 15:37:25 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*h;
	char		*n;
	size_t		i;
	size_t		j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = ft_strlen(n);
	if (j == 0)
		return (h);
	if (ft_strlen(h) == 0)
		return (NULL);
	if (len == 0)
		return (0);
	while (h[i] && i < len && len - i >= j)
	{
		if (ft_memcmp(&h[i], n, ft_strlen(n)) == 0)
			return (&h[i]);
		i++;
	}
	return (NULL);
}
