/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:43:41 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/10/29 09:06:51 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = -1;
	len = (int) ft_strlen((char *) s) + 1;
	while (i < len)
	{
		if (s[i] == (char)c)
			j = i;
		i++;
	}
	if (j == -1)
		return (NULL);
	return ((char *) s + j);
}
