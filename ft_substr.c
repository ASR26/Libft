/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:04:59 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/22 12:21:34 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	length;
	size_t	i;

	i = 0;
	sub = malloc(sizeof (char) * (len + start + 1));
	length = ft_strlen(sub);
	while (i < length)
	{
		while (s[i])
			{
				
			}
	}
}
