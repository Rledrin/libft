/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:44:43 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/14 16:23:51 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	i = 0;
	if (!(str = ft_calloc(size + 1, sizeof(char))))
		return (0);
	while (i < size)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char				f(unsigned int i, char c)
{
	return (i + c);
}
