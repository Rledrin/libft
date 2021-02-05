/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:12:24 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/08 15:23:52 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	int		i;

	i = 0;
	p = (char*)s;
	while (i < (int)n)
	{
		if (p[i] == (char)c)
			return (&p[i]);
		i++;
	}
	return (0);
}
