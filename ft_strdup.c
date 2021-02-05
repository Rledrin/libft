/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:10:37 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/14 16:14:55 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	int		i;
	char	*str;
	int		size;

	i = 0;
	str = 0;
	size = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i < size)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
