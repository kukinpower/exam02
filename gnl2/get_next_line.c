#include "get_next_line.h"



int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int ft_free_error_exit(int code, char **line)
{
    if (*line)
        free(line);
    return (code);
}

void 	allocate_line(char **line)
{
    *line = malloc(1);
    (*line)[0] = '\0';
}

void	append_buf(char *buf, char **line)
{
    int		i;
    char	*tmp;

    i = 0;
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
    tmp = NULL;
}

int get_next_line(char **line)
{
    int     count;
	char buf[2];

    count = 0;
	static _Bool flag;
    buf[1] = '\0';
    allocate_line(line);
	flag = 0;
    while ((count = read(0, buf, 1)))
    {
		flag = 1;
		if (buf[0] == '\n')
			return (1);
        append_buf(buf, line);
    }
    if (count < 0)
    {
        ft_free_error_exit(-1, line);
    }
    // if (count == 0)
    // {
	// 	if (flag && buf[0] != '\n')
	// 	{
	// 		append_buf(line);
	// 	}
    //     return (0);
    // }
	return (0);
}