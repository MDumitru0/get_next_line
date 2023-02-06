#include <unistd.h>// for read.
#include <stdlib.h>// for malloc, free
#include <stdio.h>// for printf
#include <fcntl.h>//for open
#include <sys/types.h>//for open
#include <sys/stat.h>//for open

#include "get_next_line.h"

// The file that I pass to read is "get_next_line.c"

int	main(void)
{
	int fd;

	// int open(const char *pathname, int flags); reference not executable in this program. Work possible with read(2)
	// Flags: O_RDONLY => read-only
	// O_WRONLY => write-only
	// O_RDWR => read/write

	fd = open("get_next_line.c", O_RDONLY);
	printf("| %s |\n", get_next_line(fd));
	// while ()
	// {
	// 	printf("%s|\n", get_next_line(fd));
	// }

	return 0;
}
