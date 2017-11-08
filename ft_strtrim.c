/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:40:06 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:12:40 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		length;
	int		x;
	int		y;
	char	*str;

	length = ft_strlen((char*)s);
	x = 0;
	y = length;
	while (s[x] == ' ' || s[x] == '\t' || s[x] == '\n')
		x++;
	while (s[y] == ' ' || s[y] == '\t' || s[y] == '\n')
		y--;
	if (y <= x)
		return (0);
	str = (char*)malloc(sizeof(char) * (y - x + 1));
	if (str == NULL)
		return (NULL);
	while (x < y)
	{
		str[length] = s[x];
		x++;
		length++;
	}
	str[length] = '\0';
	return (str);
}
