/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:17:28 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/16 13:04:25 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *lst)
{
	t_list	*next;

	next = NULL;
	if (lst)
	{
		next = lst->next;
		while (next)
			next = next->next;
	}
	return (next);
}
