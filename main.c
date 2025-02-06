/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:30:18 by aqrafi            #+#    #+#             */
/*   Updated: 2025/02/06 22:06:06 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int ac, char *av[])
{
	int	i;
	char	**str;
	t_s	*stack_a;
	t_s	*stack_b;
	

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	if (ac >= 2)
	{
		while (av[i])
		{
			str = ft_split(av[i],' ');
			if (check_digit(str))
				add_to_stack(&stack_a, str);
			else
				return (freestr(str),stackclear(&stack_a),0);
			i++;
		}
		if (!check_dup(stack_a))
			return (stackclear(&stack_a),0);
	}
	pa(&stack_a, &stack_b);
	sb(&stack_b);
	rb(&stack_b);
	rrb(&stack_b);
	pb(&stack_a, &stack_b);
	sb(&stack_b);
	rb(&stack_b);
	rrb(&stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	sb(&stack_b);
	rb(&stack_b);
	rrb(&stack_b);
	stackclear(&stack_a);
	stackclear(&stack_b);
	while (1);
	// return(0);
}
