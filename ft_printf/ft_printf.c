#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#include <stdio.h>


int     precision;
int     width;
int     count;
int     i;
char    *format;
va_list ap;
int     minus;

void    init_vars()
{
    minus = 0;
    
    count = 0;
    width = 0;
    precision = 0;
}

int     ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int     ft_strlen(char *str)
{
    int k;

    k = 0;
    while (str[k])
    {
        k++;
    }
    return (k);
}

int     cout_num_len(int num, int base)
{
    int j;

    j = 0;
    while (num / base > 0)
    {
        num /= base;
        j++;
    }
    return (j);
}

char    *ft_itoa_base(long long int n, int base)
{
    char *s;
    int len = cout_num_len(n, base);
    char tab[] = "0123456789ABCDEF";

    
    s = malloc(len + 1);
	s[len--] = '\0';
    while (n / base > 0)
    {
        s[len] = tab[n % base];
		n /= base;
		len--;
    }
    return (s);
}


void    handle_number()
{
	int 	k = 0;
    int base;
    long int num;
    char *str_num;

    base = 0;
    num = 0;
    if (format[i] == 'd')
    {
        num = va_arg(ap, int);
        if (num < 0)
        {
            num = -num;
            minus = 1;
        }
        base = 10;
    }
    else if (format[i] == 'x')
    {
        num = va_arg(ap, unsigned int);
        base = 16;
    }
    str_num = ft_itoa_base(num, base);
	if (width > ft_strlen(str_num) + minus)
	{
		while (k < width - (ft_strlen(str_num) + minus))
		{
			count += write(1, " ", 1);
			k++;
		}
		if (minus)
			count += write(1, "-", 1);
		count += write(1, str_num, ft_strlen(str_num));
	}
    else if (precision > ft_strlen(str_num) + minus)
	{
		while (k < width - (ft_strlen(str_num) + minus))
		{
			count += write(1, " ", 1);
			k++;
		}
		if (minus)
			count += write(1, "-", 1);
		count += write(1, str_num, ft_strlen(str_num));
	}
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
            if (format[i] == '.')
            {
                while (ft_isdigit(format[i]))
                {
                    precision = precision * 10 + format[i] - '0';
                    i++;
                }
                break ;
            }
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
    else if (format[i] == 'd' || format[i] == 'x')
    {
        handle_number();
    }
}

int ft_printf(const char *fmt, ... )
{
    format = fmt;
    init_vars();
    i = 0;
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
    va_end(ap);
	return (count);
}

int     main()
{
    int f;
    int p;

    printf("-----------------------INTEGERS-----------------------\n\n\n");
    f = ft_printf("%d", 12345678);
	printf("\n");
    p = printf("%d", 12345678);
	printf("\n");
    printf("ft_printf: %d, printf: %d\n", f, p);
}