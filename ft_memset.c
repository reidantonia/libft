/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:51:03 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 17:54:08 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char			*sentence;
	unsigned int	i;

	sentence = (char*)str;
	if (!sentence)
		return (0);
	i = 0;
	while (i < n)
	{
		sentence[i] = (unsigned char)c;
		i++;
	}
	return ((void*)str);
}
