/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:10:22 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/11 11:40:30 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != (char)c)
		i++;
	if (str[i] != (char)c)
		return (NULL);
	return ((char*)(str + i));
}
