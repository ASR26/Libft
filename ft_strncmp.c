/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:13:10 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/21 12:34:54 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta función compara n caracteres de los dos strings y devuelve la diferencia
 *  entre el primer caracter que no sea igual, si son iguales devuelve 0*/
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	comp;

	comp = 0;
	while (n > 0)
	{
		if (!(*s1) && (*s1 == *s2))
			return (0);
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
