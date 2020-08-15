
#include <stdio.h>

int ft_printf(const char *fmt, ... );

int     main()
{
    int st = 0;
    int my = 0;

    ft_printf("-----------------------TESTS-----------------------\n\n\n");
    my = ft_printf("%10.2s\n", "toto");
    st = printf("%10.2s\n", "toto");
    printf("ft_printf: %d, printf: %d\n", my, st);

    my = ft_printf("|%10.s|\n", "toto");
    st = printf("|%10.s|\n", "toto");
    printf("ft_printf: %d, printf: %d\n", my, st);

    my = ft_printf("Magic %s is %5d", "number", 42);
    st = printf("Magic %s is %5d", "number", 42);
    printf("ft_printf: %d, printf: %d\n", my, st);

    my = ft_printf("Hexadecimal for %d is %x\n", 42, 42);
    st = printf("Hexadecimal for %d is %x\n", 42, 42);
    printf("ft_printf: %d, printf: %d\n", my, st);

    // ft_printf("-----------------------INTEGERS-----------------------\n\n\n");
    // my = ft_printf("%d\n", 12345678);
    // st = printf("%d\n", 12345678);
    // printf("ft_printf: %d, printf: %d\n", my, st);
    // my = ft_printf("%d\n", 0);
    // st = printf("%d\n", 0);
    // printf("ft_printf: %d, printf: %d\n", my, st);
    // my = ft_printf("%d\n", 2147483647);
    // st = printf("%d\n", 2147483647);
    // printf("ft_printf: %d, printf: %d\n", my, st);
    // my = ft_printf("%d\n", -2147483647 - 1);
    // st = printf("%d\n", -2147483647 - 1);
    // printf("ft_printf: %d, printf: %d\n", my, st);

    // ft_printf("-----------------------HEX-----------------------\n\n\n");
    // my = ft_printf("%x\n", 15);
    // st = printf("%x\n", 15);
    // printf("ft_printf: %d, printf: %d\n", my, st);
    // my = ft_printf("%x\n", 0);
    // st = printf("%x\n", 0);
    // printf("ft_printf: %d, printf: %d\n", my, st);
    // my = ft_printf("%x\n", 123456670);
    // st = printf("%x\n", 123456670);
    // printf("ft_printf: %d, printf: %d\n", my, st);
    // my = ft_printf("%d\n", 2147483647);
    // st = printf("%d\n", 2147483647);
    // printf("ft_printf: %d, printf: %d\n", my, st);


    // printf("-----------------------STRINGS-----------------------\n\n\n");
    // my = ft_printf("%10.2s\n", "toto");
    // st = printf("%10.2s\n", "toto");
    // printf("ft_printf: %d, printf: %d\n", my, st);



}