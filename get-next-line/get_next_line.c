/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqrafi <aqrafi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:04:40 by aqrafi            #+#    #+#             */
/*   Updated: 2024/12/03 15:54:54 by aqrafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_all(int fd, char *line)
{
	char	*buffer;
	int		index;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (1)
	{
		index = read(fd, buffer, BUFFER_SIZE);
		if (index < 0)
		{
			free(buffer);
			return (NULL);
		}
		if (index == 0)
			break ;
		buffer[index] = '\0';
		line = ft_strjoin(line, buffer);
		if (!line)
			return (free(buffer),free(line),NULL);
		if (ft_strchr(line, '\n'))
			break;
	}
	free(buffer);
	return (line);
}

char	*get_lin(char *str)
{
	int		i;
	int		j;
	char	*line;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	while (j < i)
	{
		line[j] = str[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*get_remain(char *str)
{
	char	*remain;
	char	*dup_remain;

	if (!str)
		return (NULL);
	remain = ft_strchr(str, '\n');
	if (!remain)
		return (NULL);
	if (remain[0] == '\n' && ft_strlen(remain) == 1)
		return (NULL);
	dup_remain = ft_strdup(remain + 1); 
	if (!dup_remain)
		return (NULL);
	return (dup_remain);
}

char	*get_next_line(int fd)
{
	static char	*st_str;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	st_str = get_all(fd, st_str);
	if(!st_str)
		return(NULL);
	line = get_lin(st_str);
	if (!line)
		return (free(st_str),free(line), line = NULL);
	buffer = get_remain(st_str);
	free(st_str);
	st_str = buffer;
	return (line);
}
