/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:09:36 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/17 11:37:54 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int c, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char*)str;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
