/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:32:16 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:12:40 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char *str, char c)
{
	int		wc;
	char	*p1;
	char	*p2;

	p1 = str;
	wc = 0;
	while (*p1 != '\0')
	{
		if (*p1 != c)
		{
			p2 = p1;
			while (*p2 != '\0' && *p2 != c)
				p2++;
			wc++;
			p1 = p2;
		}
		else
		{
			p1++;
		}
	}
	return (wc);
}

char	*ft_wordlength(char *str, int wc, char c)
{
	int		x;
	char	*tab_wl;
	int		wl;
	int		i;

	tab_wl = (char*)malloc(sizeof(char*) * (wc + 1));
	x = 0;
	i = 0;
	wl = 0;
	while (i < wc)
	{
		while (str[x] == c)
			x++;
		while (str[x] != c && str[x] != '\0')
		{
			wl++;
			x++;
		}
		tab_wl[i] = wl;
		wl = 0;
		i++;
	}
	tab_wl[wc] = '\0';
	return (tab_wl);
}

char	**ft_fill_array(char *str, int wc, char **array, char c)
{
	int i;
	int b;
	int x;

	i = 0;
	b = 0;
	x = 0;
	while (i < wc)
	{
		while (str[x] == c)
			x++;
		while (str[x] != '\0' && str[x] != c)
		{
			array[i][b] = str[x];
			x++;
			b++;
		}
		array[i][b] = '\0';
		b = 0;
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**array;
	int		wc;
	char	*wl;
	int		i;

	wc = ft_countwords((char*)str, c);
	wl = ft_wordlength((char*)str, wc, c);
	i = 0;
	array = (char**)malloc(sizeof(char*) * (wc + 1));
	if (!array)
		return (0);
	while (i < wc)
	{
		array[i] = (char*)malloc(sizeof(char) * (wl[i] + 1));
		i++;
	}
	array = ft_fill_array((char*)str, wc, array, c);
	return (array);
}
