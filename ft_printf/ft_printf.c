#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#include <stdio.h>


int     precision;
int     width;
int     count;
int     i;
char    *format;

int     ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

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

void    handle_spec()
{

    if (format[i] == '%')
        count += write(1, &format[i], 1);
    else if (ft_isdigit(format[i]) && !width && !precision)
    {
        while (ft_isdigit(format[i]))
        {
            width = width * 10 + format[i] - '0';
            i++;
        }
    }
    else if (format[i] == '.' && !precision)
    {
        i++;
        while (ft_isdigit(format[i]))
        {
            precision = precision * 10 + format[i] - '0';
            i++;
        }
    }
}

int ft_printf(const char *fmt, ... )
{
    va_list ap;
    int     i;

    i = 0;
    count = 0;
    width = 0;
    precision = 0;
    format = fmt;
    va_start(ap, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            handle_spec(format + i);
        }
        else
        {
            count += write(1, &format[i], 1);
            i++;
        }
    }
}