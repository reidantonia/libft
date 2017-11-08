/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:55:04 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 18:00:08 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*dst;
	char	*src;

	dst = (char*)str1;
	src = (char*)str2;
	while (n > 0)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	return ((void*)str1);
}
