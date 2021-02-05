/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:55:01 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/10 18:16:37 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*d;
	const char	*s;

	d = (char*)dst;
	s = (const char*)src;
	i = 0;
	if (d < s)
	{
		while (i < (int)len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (i < (int)len)
		{
			d[(len - 1) - i] = s[(len - 1) - i];
			i++;
		}
	}
	return (dst);
}
