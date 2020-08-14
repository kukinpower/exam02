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

void	allocate_first_time(char **line)
{
	*line = malloc(1);
	*line[0] = '\0';
}

int		ft_free_exit(int code, char **line)
{
	if (*line)
	{
		free(*line);
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

	tmp = malloc(ft_strlen(*line) + 2);
	while ((*line)[i])
	{
		tmp[i] = (*line)[i];
		i++;
	}
	tmp[i] = buf[0];
	tmp[i + 1] = '\0';
	free(*line);
	*line = tmp;
}

int	get_next_line(char **line)
{
	char buf[2];
	int		count;
	static int flag;

    flag = 0;
	count = 0;
	buf[1] = '\0';
	allocate_first_time(line);
	while ((count = read(0, buf, 1)) > 0)
	{
	    flag = 1;
		if (buf[0] == '\n')
		{
			return (1);
		}
		append_buf(buf, line);
	}
	if (count < 0)
		ft_free_exit(-1, line);
	else if (count == 0)
	{
		if (flag && buf[0] != '\n')
			append_buf(buf, line);
		else
		{
			return (0);
		}
	}
	return (1);
}
