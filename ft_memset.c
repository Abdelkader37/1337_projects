/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:22:58 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/15 11:59:29 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	s = (char *)b;
	i = 0;
	while (i < len)
	{
		s[i] = (char)c;
		i++;
	}
	return (b);
}
int main()
{
	int i = 0;
	int str[6] = {1,2,3,4,5,6};
	ft_memset(str, 5, sizeof(str));
	while (i < 6)
	{
		printf("%d",str[i]);
		i++;
	}
	
}