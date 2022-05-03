/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 08:53:05 by asolano-          #+#    #+#             */
/*   Updated: 2022/04/29 12:57:33 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newl)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = newl;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = newl;
}
