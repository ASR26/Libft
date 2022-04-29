/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:56:09 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/28 12:58:43 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Esta función aplica la función f a cada caracter de s, dando como parámetros 
 * el indice de cada caracter y su dirección, que podrá modificarse*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !(*s) || !f)
		return (0);
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		++i;
	}
}
