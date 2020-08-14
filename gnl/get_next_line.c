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
	if (remainder)
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
	char *tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;

	tmp = malloc(ft_strlen(remainder) + 2);
	while (remainder[i])
	{
		tmp[i] = remainder[i];
		i++;
	}
	tmp[i] = buf[0];
	tmp[i + 1] = '\0';
	free(remainder);
	remainder = tmp;
}

int	get_next_line(char **line)
{
	char buf[2];
	int		count;

	count = 0;
	buf[1] = '\0';
	allocate_first_time(line);

	while ((count = read(0, buf, 1)) > 0)
	{
		if (buf[0] == '\n')
			return (1);
		append_buf(buf, line);
	}
	if (count < 0)
		ft_free_exit(-1, line);
	else if (count == 0)
	{
		if (buf[0] != '\n')
			append_buf(buf, line);
		else
			return (0);
	}
}
