/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:12:11 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/13 12:25:27 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (*lst)
	{
		while (*lst)
		{
			current = *lst;
			*lst = (*lst)->next;
			del(current->content);
			free(current);
		}
		*lst = NULL;
	}
}
