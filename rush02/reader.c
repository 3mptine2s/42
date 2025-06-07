#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

int main()
{
    int		fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytesread;
	int	i;

	i = 0;
	fd = open("numbers.dict", O_RDONLY,BUFFER_SIZE);
	if (fd == 1)
	{
		write(1, "Error reading file",18);
		write(1, "\n", 1);
		close(fd);
	}
	while (bytesread = read(fd, buffer,BUFFER_SIZE) > 0)
	{
		while (buffer[i])
		{
			write(1, &buffer[i], 1);
			i++;
		}
		buffer[i] = '\0';
	}
	
}