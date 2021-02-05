/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:53:47 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/09 16:02:38 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *elm;

	if (!(elm = (t_list *)ft_calloc(1, sizeof(t_list))))
		return (0);
	elm->content = content;
	elm->next = 0;
	return (elm);
}
