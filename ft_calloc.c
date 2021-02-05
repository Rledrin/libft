/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:36:05 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/10 12:00:39 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*p;
	char	*str;
	int		i;

	i = 0;
	if (!(p = (void*)malloc(count * size)))
		return (0);
	str = (char*)p;
	while (i < (int)(count * size))
	{
		str[i] = '\0';
		i++;
	}
	return (p);
}
