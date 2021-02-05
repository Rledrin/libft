/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:25:49 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/17 14:37:16 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*last;

	if (!alst || *alst == 0)
		return ;
	last = ft_lstlast(*alst);
	last->next = new;
}
