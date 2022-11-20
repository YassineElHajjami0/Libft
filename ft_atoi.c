/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:58:30 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/10/29 12:47:56 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	size_t	res;
	int		nakis;

	i = 0;
	res = 0;
	nakis = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nakis *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		if (res > 9223372036854775807 && nakis > 0)
			return (-1);
		if (res > 0 && res - 1 > 9223372036854775807 && nakis < 0)
			return (0);
		i++;
	}
	return ((int)res * nakis);
}
