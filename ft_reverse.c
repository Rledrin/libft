/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:37:30 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/14 14:38:02 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_reverse(void *s, int size)
{
	char	*str;
	int		i;
	char	tmp;

	str = s;
	i = 0;
	if (size == -1)
	{
		size = (ft_strlen(str) - 1);
		while (i++ < size--)
		{
			tmp = str[i];
			str[i] = str[size];
			str[size] = tmp;
		}
	}
	else
	{
		while (i++ < size--)
		{
			tmp = str[i];
			str[i] = str[size];
			str[size] = tmp;
		}
	}
}
