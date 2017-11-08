/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:42:56 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 21:20:07 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		l1;
	int		l2;
	int		x;
	int		y;

	x = 0;
	y = 0;
	l1 = ft_strlen((char*)s1);
	l2 = ft_strlen((char*)s2);
	str = (char*)malloc(sizeof(char) * (l1 + l2 + 1));
	if (str == NULL || (*s1 && *s2) == '\0')
		return (NULL);
	while (x < l1)
	{
		str[x] = s1[x];
		x++;
	}
	while (y < l2)
		str[x++] = s2[y++];
	str[x] = '\0';
	return (str);
}

int main () {
	char    *s1 = "HELLO";
	char    *s2 = "world";
	char    *str;

	str = ft_strjoin(s1, s2);

	printf("%s", str);
	return(0);
}
