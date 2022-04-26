/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:50:46 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/26 13:09:41 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta función crea una string que representa el valor entero recibido como
 * argumento. Gestiona números negativos*/
#include"libft.h"

int	ft_length(int n)
{
	int		neg;
	int		i;

	i = 0;
	neg = 1;
	if (n < 0)
	{
		neg = -1;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
	}
	return (i);
}

char	*ft_inttostr(int n)
{
	int		neg;
	int		i;
	char	*str;

	if (n < 0)	
		str = malloc(sizeof (char) * ft_length(n) + 2);
	else
		str = malloc(sizeof (char) * ft_length(n) + 1);
	i = 0;
	neg = 1;
	if (n < 0)
	{
		neg = -1;
		n *= -1;
	}
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (neg == -1)
		str[i] = '-';
	str[i++] = '\0';
	return (str);
}

char	*ft_revstr(char	*str)
{
	int		i;
	int		length;
	char	holder;
	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		holder = str[i];
		str[i] = str[length - i];
		str[length - i] = holder;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	str = ft_inttostr(n);
	str = ft_revstr(str);
	return (str);
}
