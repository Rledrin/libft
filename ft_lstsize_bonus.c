/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:08:37 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/17 11:36:28 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*next;

	i = 0;
	if (lst)
	{
		next = lst->next;
		while (next)
		{
			next = next->next;
			i++;
		}
	}
	return (i);
}
