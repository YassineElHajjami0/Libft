/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:34:35 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/10/29 14:59:06 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;
	unsigned int	ss;

	if (!s)
		return (NULL);
	ss = ft_strlen(s);
	if (start > ss)
		len = 0;
	i = 0;
	ss = start;
	while (s[ss] && i < len)
	{
		i++;
		ss++;
	}
	p = (char *)malloc((i + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	ss = start;
	while (s[ss] && i < len)
		p[i++] = s[ss++];
	p[i] = '\0';
	return (p);
}
