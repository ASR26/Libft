/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:54:03 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/26 10:31:06 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char **ft_split(char const *s, char c)
{
	int 	counter;
	char	**strs;
	int		i;
	int		j;

	i = 0;
	j = 0;
	counter = (ft_counter(s, c)) + 1;
	
}

size_t	ft_counter(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		while(s[i] == c)
			i++;
		if(i > 0 && s[i] && s[i - 1] == c)
			counter++;
		if(s[i])
			i++;
	}
	if (counter == 0 && s[i - 1] == c)
		return (0);
	if(s[0] != c)
		counter++;
	return (counter);
}

char	**ft_mal(char **strs, char const *s, char c)
{
	size_t	count;
	int		i;
	int		j;

	i = 0;
	if(n == 0)
		return (0);
}
