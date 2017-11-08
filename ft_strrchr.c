/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:19:53 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:20:44 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int		counter;
	char	*s;

	s = (char*)str;
	counter = 0;
	while (*s++)
	{
		counter++;
	}
	counter--;
	s--;
	while (counter > 0)
	{
		if (*s == c)
			return (s);
		counter--;
		s--;
	}
	return (0);
}
