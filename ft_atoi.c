/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 09:20:37 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:12:38 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int counter;
	int is_negative;

	counter = 0;
	result = 0;
	is_negative = 1;
	while (str == '\0')
		return (0);
	while (str[counter] <= 32)
		counter++;
	if (str[counter] == '+')
		counter++;
	if (str[counter] == '-')
	{
		counter++;
		is_negative = -1;
	}
	while ((str[counter] >= '0') && (str[counter] <= '9'))
	{
		result = result * 10 + str[counter] - 48;
		counter++;
	}
	return (result * is_negative);
}
