/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:01:34 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/06 20:59:51 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	 char *str;
	 size_t	len;
	 size_t	start;
	 size_t	end;
	
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set,s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set,s1[end - 1]))
		end--;
	len = end - start;
	str = ft_substr(s1,start,len);
	if (!str)
		return (NULL);
	return (str);
}
