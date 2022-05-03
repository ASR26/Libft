/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:17:42 by asolano-          #+#    #+#             */
/*   Updated: 2022/05/03 11:47:55 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta función busca un string corto (needle) en otro más grande (haystack), si
 * encuentra la coincidencia devuelve el puntero al principio de la coincidencia
 * */
#include"libft.h"
/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t loc)
{
	int	j;

	j = 0;
	while (loc >= 0)
	{
		while (haystack[j] == needle[j])
		{
			if (needle[j] == '\0')
				return ((char *)haystack);
			else
				j++;
		}
	haystack++;
	j = 0;
	loc--;
	}
	return (0);
}
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t loc)
{
	unsigned int	len_ndl;
	unsigned int	i;

	len_ndl = ft_strlen(needle);
	if (len_ndl == 0)
		return ((char *) haystack);
	if (len == 0)
		return (0);
	i = 0;
	while (haystack[i] && i <= (len - len_ndl))
	{
		if (!ft_strncmp(&haystack[i], needle, len_ndl))
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}
