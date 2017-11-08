/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:23:07 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:35:32 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;
	int				result;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && ((s1[i] && s2[i]) != '\0') && (i < n))
	{
		if (s1[i] != '\0')
			i++;
	}
	if (i == n)
		result = (s1[i - 1] - s2[i - 1]);
	else
		result = (s1[i] - s2[i]);
	if (result == 0)
		return (1);
	return (0);
}
