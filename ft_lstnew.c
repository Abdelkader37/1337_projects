/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:36:00 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/13 12:43:26 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_nod;

	new_nod = malloc(sizeof(t_list));
	if (!new_nod)
		return (NULL);
	new_nod->content = content;
	new_nod->next = NULL;
	return (new_nod);
}
