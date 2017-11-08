/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:05:37 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 18:06:17 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	char	*dst;
	char	*src;

	dst = (char*)str1;
	src = (char*)str2;
	if (n == 0 || str1 == str2)
		return (NULL);
	while (n > 0)
	{
		*dst = *src;
		if (*src == c)
			return ((void*)str1);
		src++;
		dst++;
		n--;
	}
	return (NULL);
}
