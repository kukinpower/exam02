#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *fmt, ... );

int     main()
{
    int my = 0;
    int st = 0;
    _Bool len = 0;

    printf("-----------------------TESTS-----------------------\n\n\n");
    my = ft_printf("|%10.2s|\n", "toto");
    st = printf("|%10.2s|\n", "toto");
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%10.s|\n", "toto");
    st = printf("|%10.s|\n", "toto");
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%10.10s|\n", "toto");
    st = printf("|%10.10s|\n", "toto");
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%1.10s|\n", "toto");
    st = printf("|%1.10s|\n", "toto");
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("Magic %s is %5d", "number", 42);
    st = printf("Magic %s is %5d", "number", 42);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("Hexadecimal for %d is |%x|\n", 42, 42);
    st = printf("Hexadecimal for %d is |%x|\n", 42, 42);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    printf("\n\n-------PERCENT-------\n\n");
    my = ft_printf("|%.0%|\n");
    st = printf("|%.0%|\n");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.2%|\n");
    st = printf("|%.2%|\n");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%11.2%|\n");
    st = printf("|%11.2%|\n");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%11%|\n");
    st = printf("|%11%|\n");
    if (len) {printf("my: %d, st: %d\n", my, st);}
   
    

    printf("\n\n-------STR-------\n\n");
    my = ft_printf("|%s|\n", "toto");
    st = printf("|%s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.s|\n", "toto");
    st = printf("|%.s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.0s|\n", "toto");
    st = printf("|%.0s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.1s|\n", "toto");
    st = printf("|%.1s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.10s|\n", "toto");
    st = printf("|%.10s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1s|\n", "toto");
    st = printf("|%1s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}
    
    my = ft_printf("|%10s|\n", "toto");
    st = printf("|%10s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1.s|\n", "toto");
    st = printf("|%1.s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1.0s|\n", "toto");
    st = printf("|%1.0s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%10.1s|\n", "toto");
    st = printf("|%10.1s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%10.10s|\n", "toto");
    st = printf("|%10.10s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1s|\n", "toto");
    st = printf("|%1s|\n", "toto");
    if (len) {printf("my: %d, st: %d\n", my, st);}



    printf("\n\n-------STR_NULL-------\n\n");
    my = ft_printf("|%s|\n", NULL);
    st = printf("|%s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.s|\n", NULL);
    st = printf("|%.s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.0s|\n", NULL);
    st = printf("|%.0s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.1s|\n", NULL);
    st = printf("|%.1s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.10s|\n", NULL);
    st = printf("|%.10s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1s|\n", NULL);
    st = printf("|%1s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}
    
    my = ft_printf("|%10s|\n", NULL);
    st = printf("|%10s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1.s|\n", NULL);
    st = printf("|%1.s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1.0s|\n", NULL);
    st = printf("|%1.0s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%10.1s|\n", NULL);
    st = printf("|%10.1s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%10.10s|\n", NULL);
    st = printf("|%10.10s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1s|\n", NULL);
    st = printf("|%1s|\n", NULL);
    if (len) {printf("my: %d, st: %d\n", my, st);}




    printf("\n\n-------HEX-------\n\n");
    my = ft_printf("|%x|\n", 15);
    st = printf("|%x|\n", 15);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%x|\n", 16);
    st = printf("|%x|\n", 16);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%x|\n", 15);
    st = printf("|%x|\n", 15);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%x|\n", -15);
    st = printf("|%x|\n", -15);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%x|\n", 0);
    st = printf("|%x|\n", 0);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%.x|\n", 0);
    st = printf("|%.x|\n", 0);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%.0x|\n", 0);
    st = printf("|%.0x|\n", 0);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%.1x|\n", 0);
    st = printf("|%.1x|\n", 0);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%10x|\n", 0);
    st = printf("|%10x|\n", 0);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%1x|\n", 0);
    st = printf("|%1x|\n", 0);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%1x|\n", 10);
    st = printf("|%1x|\n", 10);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%10x|\n", 10);
    st = printf("|%10x|\n", 10);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%10x|\n", -15);
    st = printf("|%10x|\n", -15);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%1x|\n", -15);
    st = printf("|%1x|\n", -15);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%x|\n", 2147483647);
    st = printf("|%x|\n", 2147483647);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%x|\n", -2147483647 - 1);
    st = printf("|%x|\n", -2147483647 - 1);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%.x|\n", 2147483647);
    st = printf("|%.x|\n", 2147483647);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%.0x|\n", -2147483647 - 1);
    st = printf("|%.0x|\n", -2147483647 - 1);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%.3x|\n", 2147483647);
    st = printf("|%.3x|\n", 2147483647);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%1x|\n", -2147483647 - 1);
    st = printf("|%1x|\n", -2147483647 - 1);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%10x|\n", -2147483647 - 1);
    st = printf("|%10x|\n", -2147483647 - 1);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%3x|\n", 2147483647);
    st = printf("|%3x|\n", 2147483647);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%30x|\n", 2147483647);
    st = printf("|%30x|\n", 2147483647);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%.x|\n", -2147483647 - 1);
    st = printf("|%.x|\n", -2147483647 - 1);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%.0x|\n", 2147483647);
    st = printf("|%.0x|\n", 2147483647);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%.3x|\n", -2147483647 - 1);
    st = printf("|%.3x|\n", -2147483647 - 1);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%5.x|\n", -2147483647 - 1);
    st = printf("|%5.x|\n", -2147483647 - 1);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%1.x|\n", 2147483647);
    st = printf("|%1.x|\n", 2147483647);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%10.0x|\n", 2147483647);
    st = printf("|%10.0x|\n", 2147483647);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%12.3x|\n", -2147483647 - 1);
    st = printf("|%12.3x|\n", -2147483647 - 1);
    if (len) {printf("my: %x, st: %x\n", my, st);}


    my = ft_printf("|%11.0x|\n", -2147483647 - 1);
    st = printf("|%11.0x|\n", -2147483647 - 1);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    my = ft_printf("|%15.3x|\n", 2147483647);
    st = printf("|%15.3x|\n", 2147483647);
    if (len) {printf("my: %x, st: %x\n", my, st);}

    printf("\n\n-------INT-------\n\n");
    my = ft_printf("|%d|\n", 15);
    st = printf("|%d|\n", 15);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%d|\n", -15);
    st = printf("|%d|\n", -15);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%d|\n", 0);
    st = printf("|%d|\n", 0);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.d|\n", 0);
    st = printf("|%.d|\n", 0);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.0d|\n", 0);
    st = printf("|%.0d|\n", 0);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.1d|\n", 0);
    st = printf("|%.1d|\n", 0);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%10d|\n", 0);
    st = printf("|%10d|\n", 0);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1d|\n", 0);
    st = printf("|%1d|\n", 0);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1d|\n", 10);
    st = printf("|%1d|\n", 10);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%10d|\n", 10);
    st = printf("|%10d|\n", 10);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%10d|\n", -15);
    st = printf("|%10d|\n", -15);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1d|\n", -15);
    st = printf("|%1d|\n", -15);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%d|\n", 2147483647);
    st = printf("|%d|\n", 2147483647);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%d|\n", -2147483647 - 1);
    st = printf("|%d|\n", -2147483647 - 1);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.d|\n", 2147483647);
    st = printf("|%.d|\n", 2147483647);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.0d|\n", -2147483647 - 1);
    st = printf("|%.0d|\n", -2147483647 - 1);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.3d|\n", 2147483647);
    st = printf("|%.3d|\n", 2147483647);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1d|\n", -2147483647 - 1);
    st = printf("|%1d|\n", -2147483647 - 1);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%10d|\n", -2147483647 - 1);
    st = printf("|%10d|\n", -2147483647 - 1);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%3d|\n", 2147483647);
    st = printf("|%3d|\n", 2147483647);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%30d|\n", 2147483647);
    st = printf("|%30d|\n", 2147483647);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.d|\n", -2147483647 - 1);
    st = printf("|%.d|\n", -2147483647 - 1);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.0d|\n", 2147483647);
    st = printf("|%.0d|\n", 2147483647);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%.3d|\n", -2147483647 - 1);
    st = printf("|%.3d|\n", -2147483647 - 1);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%5.d|\n", -2147483647 - 1);
    st = printf("|%5.d|\n", -2147483647 - 1);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%1.d|\n", 2147483647);
    st = printf("|%1.d|\n", 2147483647);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%10.0d|\n", 2147483647);
    st = printf("|%10.0d|\n", 2147483647);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%12.3d|\n", -2147483647 - 1);
    st = printf("|%12.3d|\n", -2147483647 - 1);
    if (len) {printf("my: %d, st: %d\n", my, st);}


    my = ft_printf("|%11.0d|\n", -2147483647 - 1);
    st = printf("|%11.0d|\n", -2147483647 - 1);
    if (len) {printf("my: %d, st: %d\n", my, st);}

    my = ft_printf("|%15.3d|\n", 2147483647);
    st = printf("|%15.3d|\n", 2147483647);
    if (len) {printf("my: %d, st: %d\n", my, st);}


printf("more tests---------------d--------------------");
    my = ft_printf("|%d|\n", 12345678);
    st = printf("|%d|\n", 12345678);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%d|\n", 0);
    st = printf("|%d|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%d|\n", 2147483647);
    st = printf("|%d|\n", 2147483647);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%d|\n", -2147483647 - 1);
    st = printf("|%d|\n", -2147483647 - 1);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.d|\n", -2147483647 - 1);
    st = printf("|%.d|\n", -2147483647 - 1);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.0d|\n", -2147483647 - 1);
    st = printf("|%.0d|\n", -2147483647 - 1);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.d|\n", 2147483646 + 1);
    st = printf("|%.d|\n", 2147483646 + 1);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.0d|\n", 2147483646 + 1);
    st = printf("|%.0d|\n", 2147483646 + 1);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.0d|\n", 0);
    st = printf("|%.0d|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.d|\n", 0);
    st = printf("|%.d|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%0.0d|\n", 0);
    st = printf("|%0.0d|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%5.d|\n", 0);
    st = printf("|%5.d|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.0d|\n", 1);
    st = printf("|%.0d|\n", 1);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.0d|\n", 24);
    st = printf("|%.0d|\n", 24);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.1d|\n", 0);
    st = printf("|%.1d|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}
    
    my = ft_printf("|%.10d|\n", 0);
    st = printf("|%.10d|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%5.10d|\n", 0);
    st = printf("|%5.10d|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%15.10d|\n", 0);
    st = printf("|%15.10d|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}



    my = ft_printf("|%.10d|\n", 150);
    st = printf("|%.10d|\n", 150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%5.10d|\n", 150);
    st = printf("|%5.10d|\n", 150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%15.10d|\n", 150);
    st = printf("|%15.10d|\n", 150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}


    my = ft_printf("|%.10d|\n", -150);
    st = printf("|%.10d|\n", -150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%5.10d|\n", -150);
    st = printf("|%5.10d|\n", -150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%15.10d|\n", -150);
    st = printf("|%15.10d|\n", -150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%3.3d|\n", -150);
    st = printf("|%3.3d|\n", -150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%5.3d|\n", -150);
    st = printf("|%5.3d|\n", -150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%5.4d|\n", -150);
    st = printf("|%5.4d|\n", -150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%5.1d|\n", -150);
    st = printf("|%5.1d|\n", -150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

printf("more tests---------------x--------------------");

    my = ft_printf("|%x|\n", 15);
    st = printf("|%x|\n", 15);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%x|\n", 0);
    st = printf("|%x|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%x|\n", 123456670);
    st = printf("|%x|\n", 123456670);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%x|\n", 2147483647);
    st = printf("|%x|\n", 2147483647);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.x|\n", 2147483647);
    st = printf("|%.x|\n", 2147483647);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.0x|\n", 2147483647);
    st = printf("|%.0x|\n", 2147483647);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.x|\n", 0);
    st = printf("|%.x|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.0x|\n", 0);
    st = printf("|%.0x|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.1x|\n", 0);
    st = printf("|%.1x|\n", 0);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.5x|\n", 2147483647);
    st = printf("|%.5x|\n", 2147483647);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%.5x|\n", 150);
    st = printf("|%.5x|\n", 150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%5.5x|\n", 150);
    st = printf("|%5.5x|\n", 150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    my = ft_printf("|%1.5x|\n", 150);
    st = printf("|%1.5x|\n", 150);
    if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    sleep(10);
}