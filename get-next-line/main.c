#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd = open("test_file.txt", O_RDONLY);
	char *line;
	int a = 13;
	while (a--)
	{
		line = get_next_line(fd);
		printf("line :%s", line);
		free(line);
	}
	close(fd);
	// while(1);
	return (0);
}