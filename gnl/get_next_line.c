#include "get_next_line.h"


int     ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static char	*remainder;
char buf[2];


void	allocate_first_time(char **line)
{
	remainder = malloc(1);
	remainder[0] = '\0';
	*line = malloc(1);
	*line[0] = '\0';
}

int		ft_free_exit(int code, char **line)
{
	if (*remainder)
	{
		free(remainder);
	}
	if (*line)
	{
		free(*line);
	}
	return (code);
}

void	append_buf(char *buf, char **line)
{
	
}

int	get_next_line(char **line)
{
	char buf[2];
	int		count;

	count = 0;
	allocate_first_time(line);

	while ((count = read(0, buf, 1)) > 0)
	{
		buf[1] = '\0';
		append_buf(buf, line);
	}
	if (count < 0)
		ft_free_exit(-1, line);
}
