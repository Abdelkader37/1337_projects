/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:56:03 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/04 23:34:10 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == (char)c)
			return ((char *)&s1[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s1[i]);
	return (NULL);
}
