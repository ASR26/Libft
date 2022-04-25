/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:29:48 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/21 12:32:21 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta función sustituye size caracteres el valor en memoria de src a dest, si 
 * src y dest se solapan el resultado será indefinido*/
#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	char	*temp_dest;
	char	*temp_src;

	temp_src = (char *)src;
	temp_dest = (char *)dest;
	if (size == 0 || dest == 0)
		return (0);
	while (size-- > 0)
	{
		*temp_dest++ = *temp_src++;
	}
	return (dest);
}
