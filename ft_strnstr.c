/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:21:02 by areid             #+#    #+#             */
/*   Updated: 2017/11/08 10:40:50 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *fnd, size_t len)
{
	unsigned int	x;
	unsigned int	y;
	char			*s;

	s = (char*)str;
	x = 0;
	while (s[x] != '\0' && x < len)
	{
		y = 0;
		while (s[x + y] ==  fnd[y])
		{
			y++;
			if (fnd[y] == '\0')
			{
				s = s + x;
				return (s);
			}
		}
		x++;
	}
	return (0);
}
