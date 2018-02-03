/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:42:56 by areid             #+#    #+#             */
/*   Updated: 2017/11/18 19:40:55 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		y;
	int		l2;
	int		x;

	x = 0;
	y = 0;
	if (!s1 || !s2)
		return (NULL);
	y = ft_strlen((const char *)s1);
	l2 = ft_strlen((const char *)s2);
	if ((str = ft_strnew(y + l2)) == NULL)
		return (NULL);
	if (*s2 == '\0' && *s1 == '\0')
		return ((char *)str);
	while (x < y)
	{
		str[x] = s1[x];
		x++;
	}
	y = 0;
	while (y < l2)
		str[x++] = s2[y++];
	str[x] = '\0';
	return (str);
}
