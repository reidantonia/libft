/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:56:51 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:12:38 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int counter;
	int i;

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
