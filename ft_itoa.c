/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:33:16 by aqrafi            #+#    #+#             */
/*   Updated: 2024/11/16 19:56:17 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*n_cpy(char *str, long len, long nb)
{
	while (len > 0)
	{
		str[len - 1] = (nb % 10) + 48;
		len--;
		nb /= 10;
	}
	return (str);
}

static long	n_len(long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*s_alloc(long len)
{
	char	*str1;

	str1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!str1)
		return (NULL);
	return (str1);
}

static char	*handle_zero_case(void)
{
	char	*str;

	str = s_alloc(1);
	if (str)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	long	len;
	char	*str;

	nb = (long)n;
	len = 0;
	if (n == 0)
	{
		return (handle_zero_case());
	}
	len = n_len(nb);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	str = s_alloc(len);
	if (!str)
		return (NULL);
	str[len] = '\0';
	n_cpy(str, len, nb);
	if (n < 0)
		str[0] = '-';
	return (str);
}
