/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:03:44 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/14 18:00:00 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_exeption(int *tab)
{
	tab[0] = 8;
	tab[1] = 4;
	tab[2] = 6;
	tab[3] = 3;
	tab[4] = 8;
	tab[5] = 4;
	tab[6] = 7;
	tab[7] = 4;
	tab[8] = 1;
	tab[9] = 2;
	tab[14] = 1;
	tab[13] = 9;
}

void		ft_tabnbr(int *tab, int n)
{
	int		i;

	i = 0;
	tab[14] = 0;
	if (n == -2147483648)
	{
		ft_exeption(tab);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		tab[14] = 1;
	}
	while (n >= 10)
	{
		tab[i] = n % 10;
		n = n / 10;
		i++;
	}
	tab[i] = n % 10;
	tab[13] = i;
}

char		*ft_numtotab(char *str, int *tab)
{
	int		i;
	int		j;

	i = tab[13];
	j = 0;
	if (tab[14] == 1)
	{
		str[0] = '-';
		j++;
	}
	while (i >= 0 && j <= (tab[13] + tab[14]))
	{
		str[j] = (tab[i] + '0');
		j++;
		i--;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		tab[15];
	char	*str;

	ft_tabnbr(tab, n);
	if (!(str = ft_calloc((tab[13] + tab[14] + 2), sizeof(char))))
		return (0);
	str[(tab[13] + tab[14] + 1)] = '\0';
	return (ft_numtotab(str, tab));
}
