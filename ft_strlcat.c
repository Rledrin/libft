/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:36:47 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/15 11:26:56 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	while (dst[i] != '\0' && i < (int)size)
		i++;
	while (src[j] != '\0' && i < (int)(size - 1))
		dst[i++] = src[j++];
	if (size != 0 && size >= len_dst)
		dst[i] = '\0';
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + len_dst);
}
