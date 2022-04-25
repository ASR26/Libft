/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:33:01 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/22 11:10:16 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"
char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		str_length;

	s2 = 0;
	str_length = ft_strlen(s1) + 1;
	s2 = malloc(sizeof (char) *str_length);
	if (str_length == 0)
		return (0);
	ft_strlcpy(s2, s1, str_length);
	return (s2);
}
