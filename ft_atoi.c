/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:06:46 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/10 11:58:59 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		whitespace(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == '\r' ||
		c == '\f' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int	i;
	int sign;
	int result;

	sign = 1;
	i = 0;
	result = 0;
	while (whitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}
