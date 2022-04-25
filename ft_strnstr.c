/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:17:42 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/22 11:07:04 by asolano-         ###   ########.fr       */
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
	size_t	j;
	size_t	i;
	size_t	length;
	char	*hay;

	hay = (char *)haystack;
	length = ft_strlen(needle);
	i = 0;
	if(length == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < loc)
	{
		j = 0;
		while (hay[i + j] == needle[j] && needle[i] != '\0'
				&& hay[i + j] != '\0' && i + j < loc)
			j++;
		if (j == length)
			return (hay + i);

		i++;
	}
	return (0);
}
