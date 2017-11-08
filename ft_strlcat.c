/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:41:09 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:42:50 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	if (src == '\0' && dest == '\0')
		return (0);
	while (dest[counter] != '\0')
		counter++;
	while (src[i] != '\0')
	{
		dest[counter] = src[i];
		counter++;
		i++;
	}
	dest[counter] = '\0';
	return (dest);
}
