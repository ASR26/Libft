/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 08:40:58 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/21 12:38:33 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta función te convierte los números de un string en un entero*/
#include"libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	isneg;
	int	i;

	i = 0;
	num = 0;
	isneg = 1;
	while (str[i] != '\0' && (str[i] == ' ' || str [i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		isneg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
			num = (num * 10) + (str[i++] - '0');
	return (num * isneg);
}
