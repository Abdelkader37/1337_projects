/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:53:34 by aqrafi            #+#    #+#             */
/*   Updated: 2025/02/06 17:54:06 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int	check_digit(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]) && !((str[i][j] == '-'
						|| str[i][j] == '+') && ft_isdigit(str[i][j + 1])))
			{
				write(2, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int check_dup(t_s *stack)
{
	t_s	*tmp;

	tmp = stack;
	if (!stack)
		return(0);
	while (stack)
	{
		tmp = stack;
		while (tmp->next)
		{
			tmp = tmp->next;
			if (stack->data == tmp->data)
			{
				write(2, "Error\n", 6);
				return(0);
			}
		}
		stack = stack->next;
	}
	return (1);
}
