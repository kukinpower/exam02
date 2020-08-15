#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#include <stdio.h>

char *f;
int i;
int width;
int precision;
int minus;
int dot;
va_list ap;
int count = 0;
char *toprint = NULL;

void init()
{
    if (toprint)
        toprint = NULL;
    width = 0;
    precision = 0;
    minus = 0;
	dot = 0;
}

int     ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

int		intlen(long long int n, int b)
{
	int j = 0;

	while (n / b > 0)
	{
		j++;
		n /= b;
	}
	j++;
	return (j);
}

char *ft_itoa_base(long long int num, int base)
{
	char *str;
	
	if (num == 0)
	{
		str = malloc(2);
		str[0] = '0';
		str[1] = '\0';
	}
	if (num < 0)
	{
		num = -num;
		minus = 1;
	}
	char tab[] = "0123456789abcdef";
	int len = intlen(num, base);
	str = malloc(len + 1);
	str[len] = '\0';
	len--;
	while (num / base > 0)
	{
		str[len--] = tab[num % base];
		num /= base;
	}
	str[len] = tab[num % base];
	return (str);
}

_Bool	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi()
{
	int n = 0;

	while (ft_isdigit(f[i]))
	{
		n = n * 10 + (f[i] - '0');
		i++;
	}
	return (n);
}

void handle_specs()
{
	if (ft_isdigit(f[i]))
	{
		width = ft_atoi();
		if (f[i] == '.' && !dot)
		{
			i++;
			precision = ft_atoi();
			dot = 1;
		}
	}
	else if (ft_isdigit(f[i]) && !dot)
	{
		i++;
		precision = ft_atoi();
		dot = 1;
	}
	printf("[[[[width: %d, precision: %d]]]]]\n", width, precision);
}

void handle_s()
{
	int j = 0;
	
	toprint = va_arg(ap, char *);
	if (dot && precision < ft_strlen(toprint))
	{
		while (width > ft_strlen(toprint) - precision)
		{
			count += write(1, " ", 1);
			width--;
		}
		while (j < precision)
		{
			count += write(1, &toprint[j], 1);
			j++;
		}
	}
	else if (width > ft_strlen(toprint))
	{
		while (width > ft_strlen(toprint))
		{
			count += write(1, " ", 1);
			width--;
		}
		count += write(1, toprint, ft_strlen(toprint));
	}
	else
	{
		count += write(1, toprint, ft_strlen(toprint));
	}
	i++;
}

void handle_type()
{
	

	if (f[i] == '%')
	{
		count += write(1, "%", 1);
		i++;
	}	
	else if (f[i] == 'd')
	{
		toprint = ft_itoa_base(va_arg(ap, int), 10);
		if (minus)
		{
			count += write(1, "-", 1);
		}
		count += write(1, toprint, ft_strlen(toprint));
		i++;
	}
	else if (f[i] == 'x')
	{
		toprint = ft_itoa_base(va_arg(ap, long long int), 16);
		count += write(1, toprint, ft_strlen(toprint));
		i++;
	}
	else if (f[i] == 's')
	{
		handle_s();
	}
}

int ft_printf(const char *fmt, ... )
{
    f = (char *)fmt;
    va_start(ap, fmt);
	init();
	count = 0;
	i = 0;
    while (f[i])
    {
        if (f[i] == '%')
        {
			i++;
			if (ft_isdigit(f[i]) || f[i] == '.')
            	handle_specs();
			handle_type();
        }
        else
        {
            count += write(1, &f[i], 1);
            i++;
        }
    }
    va_end(ap);
	
    return (count);
}