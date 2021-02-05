/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:10:47 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/10 13:11:13 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*desti;
	const char		*srce;
	size_t			i;

	i = 0;
	desti = (char*)dest;
	srce = (const char*)src;
	while (i < n)
	{
		desti[i] = srce[i];
		i++;
	}
	return (dest);
}
