/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:12:54 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/16 11:00:33 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		j;

	j = 0;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	if (str == (char*)s)
	{
		str[j] = '\0';
		return (str);
	}
	if (start > ft_strlen((char*)s))
	{
		str[j] = '\0';
		return (str);
	}
	while (j < len)
	{
		str[j] = s[start];
		j++;
		start++;
	}
	str[j] = '\0';
	return (str);
}
