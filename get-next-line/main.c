#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd = open("test_file.txt", O_RDONLY);
	char *line;
	line = get_next_line(fd);
	printf("line :%s", line);
	line = get_next_line(fd);
	printf("line :%s", line);

	close(fd);
}