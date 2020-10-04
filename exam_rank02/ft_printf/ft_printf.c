#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int k = 0;
char *f = NULL;
va_list ap;
int count = 0;

char *toprint;
int width;
int precision;
int minus;
int dot;

void init()
{
    width = 0;
    precision = 0;
    minus = 0;
    dot = 0;
    toprint = NULL;
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int intlen(long int n, int b)
{
    int i = 0;
    while (n / b > 0)
    {
        n /= b;
        i++;
    }
    i++;
    return (i > precision ? i : precision);
}

char *ft_itoa_base(long int num, int base)
{
    int len;
    int z = 0;

    if (num < 0)
    {
        num = -num;
        minus = 1;
    }
    if (num == 0 && !precision && dot)
        len = 0;
    else
        len = intlen(num, base);
    char *str = malloc(len + 1);
    while (z < len)
    {
        str[z] = '0';
        z++;
    }
    
    str[len--] = '\0';
    while (num / base > 0)
    {
        str[len] = "0123456789abcdef"[num % base];
        num /= base;
        len--;
    }
    str[len] = "0123456789abcdef"[num % base];
    return (str);
}

_Bool ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int ft_atoi()
{
    int val = 0;

    while (ft_isdigit(f[k]))
    {
        val = val * 10 + (f[k] - '0');
        k++;
    }
    return (val);
}

void handle_specs()
{
    if (ft_isdigit(f[k]))
    {
        width = ft_atoi();
        if (f[k] == '.')
        {
            dot = 1;
            k++;
            if (ft_isdigit(f[k]))
                precision = ft_atoi();
        }
    }
    else if (f[k] == '.')
    {
        dot = 1;
        k++;
        if (ft_isdigit(f[k]))
            precision = ft_atoi();
    }
}

void handle_type()
{
    if (f[k] == 'd')
    {   
        toprint = ft_itoa_base(va_arg(ap, int), 10);
        while (width > ft_strlen(toprint) + minus)
        {
            count += write(1, " ", 1);
            width--;
        }
        if (minus)
            count += write(1, "-", 1);
        count += write(1, toprint, ft_strlen(toprint));
        free(toprint);
    }
    else if (f[k] == 'x')
    {   
        toprint = ft_itoa_base(va_arg(ap, long int), 16);
        while (width > ft_strlen(toprint) + minus)
        {
            count += write(1, " ", 1);
            width--;
        }
        if (minus)
            count += write(1, "-", 1);
        count += write(1, toprint, ft_strlen(toprint));
        free(toprint);
    }
    else if (f[k] == 's')
    {
        _Bool alloc = 0;
        //сформировать строку с пресижн
        //печатаем width
        //печатаем строку
        toprint = va_arg(ap, char *);
        if (!toprint)
            toprint = "(null)";
        if (dot && precision < ft_strlen(toprint))
        {
            int j = 0;
            char *tmp = malloc(ft_strlen(toprint) - (ft_strlen(toprint) - precision));
            while (j < ft_strlen(toprint) - (ft_strlen(toprint) - precision))
            {
                tmp[j] = toprint[j];
                j++;
            }
            tmp[j] = '\0';
            toprint = tmp;
            alloc = 1;
        }
        if (width)
        {
            while (width > ft_strlen(toprint))
            {
                count += write(1, " ", 1);
                width--;
            }
        }
        count += write(1, toprint, ft_strlen(toprint));
        if (alloc)
            free(toprint);
    }
    else if (f[k] == '%')
    {
        while (width > 1)
        {
            count += write(1, " ", 1);
            width--;
        }
        count += write(1, &f[k], 1);
    }
}

int ft_printf(const char *fmt, ... )
{
    va_start(ap, fmt);
    f = (char *)fmt;
    init();
    count = 0;
    k = 0;
    while (f[k])
    {
        
        if (f[k] == '%')
        {
            k++;
            handle_specs();
            handle_type();
            init();
            k++;
        }
        else
        {
            count += write(1, &f[k], 1);
            k++;
        }
    }
    va_end(ap);
    return (count);
}