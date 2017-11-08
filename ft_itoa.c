/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:56:27 by areid             #+#    #+#             */
/*   Updated: 2017/11/08 11:49:50 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countdig(int number)
{
	int digits;

	digits = 0;
	while (number > 0)
	{
		number = number / 10;
		digits++;
	}
	return (digits);
}

char	*ft_fill_array(int n, char *str, int digits, int neg_flag)
{
	int	ip;

	while (n)
	{
		ip = n % 10 + '0';
		str[digits - 1] = ip;
		digits--;
		n = n / 10;
	}
	if (neg_flag)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	int		neg_flag;

	neg_flag = 0;
	if (n < 0)
	{
		n = -1 * n;
		neg_flag = 1;
	}
	digits = ft_countdig(n);
	if (neg_flag)
		digits = digits + 1;
	str = (char*)malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	if (neg_flag)
		str[digits] = '\0';
	else
		str[digits + 1] = '\0';
	str = ft_fill_array(n, str, digits, neg_flag);
	return (str);
}
