/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:11:32 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/11 16:20:14 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	int		i;

	i = (ft_strlen(str));
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char*)&str[i]);
		i--;
	}
	return (0);
}
