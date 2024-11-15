/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:49:26 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/13 12:40:26 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	void	*data;

	if (!lst || !f)
		return (NULL);
	head = NULL;
	while (lst)
	{
		data = f(lst->content);
		node = ft_lstnew(data);
		if (!node)
		{
			del(data);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
