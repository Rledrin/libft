/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:51:51 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/17 11:33:22 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*after;
	t_list	*before;
	t_list	**save;

	save = lst;
	after = NULL;
	if (!lst)
		return ;
	before = *lst;
	while (after)
	{
		after = before->next;
		while (after)
		{
			ft_lstdelone(before, del);
			before = after;
			after = before->next;
		}
		ft_lstdelone(before, del);
	}
	free(save);
}
