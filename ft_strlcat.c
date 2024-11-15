/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:42:22 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/10 15:12:31 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	dstlen;
	size_t	srclen;
	size_t	size;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	len = dstlen + srclen;
	size = dstsize - dstlen - 1;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] && i < size)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (len);
}
