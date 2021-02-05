/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:52:43 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/16 12:25:17 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list		*elem;

	elem = lst;
	while (elem)
	{
		(*f)(elem->content);
		elem = elem->next;
	}
}
