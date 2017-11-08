/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:06:46 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 19:22:21 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*sentence;

	sentence = (char*)s;
	while (n > 0)
	{
		*sentence = '\0';
		sentence++;
		n--;
	}
	return (0);
}