/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:00:44 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/10/29 12:49:00 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count(long num)
{
	int	i;

	i = 0;
	if (num <= 0)
	{
		i++;
		num = -num;
	}
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*p;
	long	nn;

	i = count((long)n);
	nn = (long)n;
	if (nn < 0)
		nn = -nn;
	p = (char *)malloc(sizeof(char) * i + 1);
	if (!p)
		return (NULL);
	p[i] = '\0';
	i--;
	while (i > 0)
	{
		p[i] = nn % 10 + '0';
		nn /= 10;
		i--;
	}
	if (n < 0)
		p[i] = '-';
	else
		p[i] = nn + '0';
	return (p);
}
