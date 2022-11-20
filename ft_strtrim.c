/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:55:39 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/10/28 16:30:30 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*removefront(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				j = 0;
				s1++;
				continue ;
			}
			j++;
		}
		break ;
	}
	return ((char *)s1);
}

static	char	*allocate(const char *s, int l)
{
	char	*p;
	int		j;

	p = (char *)malloc(sizeof(char) * (l + 1));
	if (!p)
		return (NULL);
	j = 0;
	while (s[j] && j < l)
	{
		p[j] = s[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

static	int	looper(char *s, char *set, int i)
{
	int	j;

	j = 0;
	while (s[i])
	{
		while (set[j])
		{
			if (s[i] == set[j])
			{
				i--;
				j = 0;
				continue ;
			}
			j++;
		}
		break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*p;

	if (!s1)
		return (NULL);
	s1 = removefront(s1, set);
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = ft_strlen((char *)s1);
	i--;
	i = looper((char *)s1, (char *)set, i);
	p = allocate(s1, ++i);
	return (p);
}
