/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:36:32 by areid             #+#    #+#             */
/*   Updated: 2017/11/07 16:36:50 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	x;

	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	x = 0;
	while (s[x] != '\0')
	{
		f(x, s[x]);
		str[x] = s[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}
