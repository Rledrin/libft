/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:25:09 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/16 11:03:31 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		size;
	char	*b;

	i = 0;
	b = (char*)big;
	size = ft_strlen(little);
	if (size == 0)
		return (b);
	while (b[i] && i < len)
	{
		j = 0;
		while (b[i + j] && little[j] && (i + j) < len &&
				(b[i + j] == little[j]))
			j++;
		if (j == size)
			return (&(b[i]));
		i++;
	}
	return (0);
}
