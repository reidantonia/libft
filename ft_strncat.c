/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 21:56:50 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:12:38 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int counter;
	int i;

	counter = 0;
	i = 0;
	if (src == '\0' && dest == '\0')
		return (0);
	while (dest[counter] != '\0')
		counter++;
	while (i < nb)
	{
		dest[counter] = src[i];
		counter++;
		i++;
	}
	dest[counter] = '\0';
	return (dest);
}
