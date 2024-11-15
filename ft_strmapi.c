/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:28:00 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/14 12:26:55 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char to_uppercase(unsigned int index, char c) {
    (void)index; // Unused parameter
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }
    return c;
}

char double_char(unsigned int index, char c) {
    (void)index; // Unused parameter
    return c * 2;
}

char caesar_shift(unsigned int index, char c) {
    (void)index; // Unused parameter
    if (c >= 'a' && c <= 'z') {
        return ((c - 'a' + 3) % 26) + 'a';
    } else if (c >= 'A' && c <= 'Z') {
        return ((c - 'A' + 3) % 26) + 'A';
    }
    return c;
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	int				len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
