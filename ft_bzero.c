/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:22:58 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/21 12:29:53 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta función sustituye n veces los bytes en la memoria dada por bytes nulos*/
#include"libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*suc;

	i = 0;
	suc = (unsigned char *)str;
	while (i < n)
	{
		suc[i] = 0;
		i++;
	}
	str = suc;
}
