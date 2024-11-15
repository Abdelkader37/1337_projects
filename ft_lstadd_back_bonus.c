/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:32:08 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/14 11:48:22 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curent;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}

	curent = *lst;
	while (curent->next)
		curent = curent->next;
	curent->next = new;
}
