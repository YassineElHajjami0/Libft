/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:51:52 by yel-hajj          #+#    #+#             */
/*   Updated: 2022/10/28 17:10:21 by yel-hajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			t = *lst;
			while (t->next != NULL)
				t = t->next;
			t->next = new;
		}
	}
}
