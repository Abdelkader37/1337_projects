/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:08:37 by aqrafi            #+#    #+#             */
/*   Updated: 2025/02/06 18:48:56 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void ra(t_s **stack_a)
{
	t_s	*tmp;
	if (!*stack_a || !stack_a)
		return;
	tmp = remove_top(stack_a);
	stack_add_back(stack_a,tmp);
}
void rb(t_s **stack_b)
{
	t_s	*tmp;
	if (!*stack_b || !stack_b)
		return;
	tmp = remove_top(stack_b);
	stack_add_back(stack_b,tmp);
}
void    rr(t_s **stack_a, t_s **stack_b)
{
    ra(stack_a);
    rb(stack_b);
}
void    rra(t_s **stack_a)
{
    t_s *tmp;
    if (!*stack_a || !stack_a)
		return;
    tmp = remove_bot(stack_a);
    stack_add_front(stack_a, tmp);
} 
void    rrb(t_s **stack_b)
{
    t_s *tmp;
    if (!*stack_b || !stack_b)
		return;
    tmp = remove_bot(stack_b);
    stack_add_front(stack_b, tmp);
}
void	rrr(t_s	**stack_a,t_s	**stack_b)
{
    rra(stack_a);
    rrb(stack_b);
}