/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:18:14 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:19:43 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	int				x;

	i = 0;
	x = start;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL || s[start] == '\0' || s[start + len] == '\0')
		return (NULL);
	while (i < len)
	{
		str[i] = s[x];
		x++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
