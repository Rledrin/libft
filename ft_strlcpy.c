/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:10:49 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/14 14:53:46 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t					ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t				nleft;
	const char			*s;

	s = src;
	nleft = n;
	if (nleft != 0)
	{
		while (--nleft != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		}
	}
	if (nleft == 0)
	{
		if (n != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - s - 1);
}
