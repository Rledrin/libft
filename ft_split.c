/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:07:31 by rledrin           #+#    #+#             */
/*   Updated: 2019/10/14 17:19:30 by rledrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			nombre_mots(char *str, char c)
{
	int		i;
	int		mots;

	i = 0;
	mots = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			mots++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (mots);
}

char		**taille_mots(char *str, char c, char **tab)
{
	int		i;
	int		mots;
	int		taille;

	i = 0;
	taille = 0;
	mots = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		taille = 0;
		while (str[i] != c && str[i] != '\0')
		{
			taille++;
			i++;
		}
		if (!(tab[mots] = (char*)ft_calloc((taille + 1), sizeof(char))))
			return (0);
		mots++;
	}
	return (tab);
}

char		**place_mots(char *str, char c, char **tab)
{
	int		i;
	int		mots;
	int		taille;

	i = 0;
	taille = 0;
	mots = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		taille = 0;
		while (str[i] != c && str[i] != '\0')
		{
			tab[mots][taille] = str[i];
			taille++;
			i++;
		}
		tab[mots][taille] = '\0';
		mots++;
	}
	return (tab);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		nbmots;

	nbmots = nombre_mots((char*)s, c);
	if (!(tab = (char**)ft_calloc(nbmots + 1, sizeof(char*))))
		return (0);
	taille_mots((char*)s, c, tab);
	place_mots((char*)s, c, tab);
	tab[nombre_mots((char*)s, c)] = NULL;
	return (tab);
}
