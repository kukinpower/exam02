
#include <stdio.h>

int ft_printf(const char *fmt, ... );

int     main()
{
    int st = 0;
    int my = 0;
    _Bool len = 1;

    // ft_printf("-----------------------TESTS-----------------------\n\n\n");
    // my = ft_printf("|%10.2s|\n", "toto");
    // st = printf("|%10.2s|\n", "toto");
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%10.s|\n", "toto");
    // st = printf("|%10.s|\n", "toto");
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%10.10s|\n", "toto");
    // st = printf("|%10.10s|\n", "toto");
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%1.10s|\n", "toto");
    // st = printf("|%1.10s|\n", "toto");
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("Magic %s is %5d", "number", 42);
    // st = printf("Magic %s is %5d", "number", 42);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("Hexadecimal for %d is |%x|\n", 42, 42);
    // st = printf("Hexadecimal for %d is |%x|\n", 42, 42);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // printf("\n-----------------------INTEGERS-----------------------\n\n");
    // my = ft_printf("%d\n", 12345678);
    // st = printf("%d\n", 12345678);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}
    // my = ft_printf("%d\n", 0);
    // st = printf("%d\n", 0);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}
    // my = ft_printf("%d\n", 2147483647);
    // st = printf("%d\n", 2147483647);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}
    // my = ft_printf("%d\n", -2147483647 - 1);
    // st = printf("%d\n", -2147483647 - 1);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%.d|\n", -2147483647 - 1);
    // st = printf("|%.d|\n", -2147483647 - 1);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%.0d|\n", -2147483647 - 1);
    // st = printf("|%.0d|\n", -2147483647 - 1);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%.d|\n", 2147483646 + 1);
    // st = printf("|%.d|\n", 2147483646 + 1);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%.0d|\n", 2147483646 + 1);
    // st = printf("|%.0d|\n", 2147483646 + 1);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%.0d|\n", 0);
    // st = printf("|%.0d|\n", 0);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%.d|\n", 0);
    // st = printf("|%.d|\n", 0);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%0.0d|\n", 0);
    // st = printf("|%0.0d|\n", 0);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%5.d|\n", 0);
    // st = printf("|%5.d|\n", 0);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%.0d|\n", 1);
    // st = printf("|%.0d|\n", 1);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%.0d|\n", 24);
    // st = printf("|%.0d|\n", 24);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%.1d|\n", 0);
    // st = printf("|%.1d|\n", 0);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}
    
    // my = ft_printf("|%.10d|\n", 0);
    // st = printf("|%.10d|\n", 0);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%5.10d|\n", 0);
    // st = printf("|%5.10d|\n", 0);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%15.10d|\n", 0);
    // st = printf("|%15.10d|\n", 0);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}



    // my = ft_printf("|%.10d|\n", 150);
    // st = printf("|%.10d|\n", 150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%5.10d|\n", 150);
    // st = printf("|%5.10d|\n", 150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%15.10d|\n", 150);
    // st = printf("|%15.10d|\n", 150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}


    // my = ft_printf("|%.10d|\n", -150);
    // st = printf("|%.10d|\n", -150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%5.10d|\n", -150);
    // st = printf("|%5.10d|\n", -150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%15.10d|\n", -150);
    // st = printf("|%15.10d|\n", -150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%3.3d|\n", -150);
    // st = printf("|%3.3d|\n", -150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%5.3d|\n", -150);
    // st = printf("|%5.3d|\n", -150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%5.4d|\n", -150);
    // st = printf("|%5.4d|\n", -150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}

    // my = ft_printf("|%5.1d|\n", -150);
    // st = printf("|%5.1d|\n", -150);
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}



    // ft_printf("----------------%%d-%%i--------------------\n");
	// printf("01) standart PRINTF : |%d|\n", 42);
	// ft_printf("01) my       PRINTF : |%d|\n", 42);
	// printf("04) standart PRINTF : |%10d|\n", 100);
	// ft_printf("04) my       PRINTF : |%10d|\n", 100);
	// printf("06) standart PRINTF : |%.10d|\n", 100);
	// ft_printf("06) my       PRINTF : |%.10d|\n", 100);
	// printf("07) standart PRINTF : |%10.5d|\n", 100);
	// ft_printf("07) my       PRINTF : |%10.5d|\n", 100);
	// printf("08) standart PRINTF : |%5.10d|\n", 64);
	// ft_printf("08) my       PRINTF : |%5.10d|\n", 64);
	// printf("09) standart PRINTF : |%1.1d|\n", 16);
	// ft_printf("09) my       PRINTF : |%1.1d|\n", 16);
	// printf("10) standart PRINTF : |%d|\n", -42);
	// ft_printf("10) my       PRINTF : |%d|\n", -42);
	// printf("11) standart PRINTF : |%10d|\n", -42);
	// ft_printf("11) my       PRINTF : |%10d|\n", -42);
	// printf("12) standart PRINTF : |%.10d|\n", -42);
	// ft_printf("12) my       PRINTF : |%.10d|\n", -42);
	// printf("13) standart PRINTF : |%10.5d|\n", -16);
	// ft_printf("13) my       PRINTF : |%10.5d|\n", -16);
	// printf("14) standart PRINTF : |%5.10d|\n", -16);
	// ft_printf("14) my       PRINTF : |%5.10d|\n", -16);
	// printf("15) standart PRINTF : |%1.1d|\n", -20);
	// ft_printf("15) my       PRINTF : |%1.1d|\n", -20);
	// printf("17) standart PRINTF : |%2d|\n", -20);
	// ft_printf("17) my       PRINTF : |%2d|\n", -20);
	// printf("18) standart PRINTF : |%.2d|\n", -20);
	// ft_printf("18) my       PRINTF : |%.2d|\n", -20);
	// printf("19) standart PRINTF : |%2d|\n", -1);
	// ft_printf("19) my       PRINTF : |%2d|\n", -1);
	// printf("20) standart PRINTF : |%.2d|\n", -1);
	// ft_printf("20) my       PRINTF : |%.2d|\n", -1);

	// printf("25) standart PRINTF : |%05.3d|\n", 5);
	// ft_printf("25) my       PRINTF : |%05.3d|\n", 5);
	// printf("26) standart PRINTF : |%03.5d|\n", 5);
	// ft_printf("26) my       PRINTF : |%03.5d|\n", 5);
	// printf("27) standart PRINTF : |%05.3d|\n", -5);
	// ft_printf("27) my       PRINTF : |%05.3d|\n", -5);
	// printf("28) standart PRINTF : |%03.5d|\n", -5);
	// ft_printf("28) my       PRINTF : |%03.5d|\n", -5);

	// printf("31) standart PRINTF : |%.d|\n", 0);
	// ft_printf("31) my       PRINTF : |%.d|\n", 0);
	// printf("32) standart PRINTF : |%.d|\n", 100);
	// ft_printf("32) my       PRINTF : |%.d|\n", 100);

    ft_printf("-----------------------HEX-----------------------\n\n\n");
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


    printf("01) standart PRINTF : |%x|\n", 34);
	ft_printf("01) my       PRINTF : |%x|\n", 34);
	printf("02) standart PRINTF : |%x|\n", -34);
	ft_printf("02) my       PRINTF : |%x|\n", -34);
	printf("04) standart PRINTF : |%10x|\n", 90);
	ft_printf("04) my       PRINTF : |%10x|\n", 90);
	printf("05) standart PRINTF : |%.10x|\n", 90);
	ft_printf("05) my       PRINTF : |%.10x|\n", 90);
	printf("06) standart PRINTF : |%15x|\n", -100);
	ft_printf("06) my       PRINTF : |%15x|\n", -100);
	printf("07) standart PRINTF : |%.15x|\n", -100);
	ft_printf("07) my       PRINTF : |%.15x|\n", -100);
	printf("08) standart PRINTF : |%10.5x|\n", 52);
	ft_printf("08) my       PRINTF : |%10.5x|\n", 52);
	printf("09) standart PRINTF : |%5.10x|\n", 52);
	ft_printf("09) my       PRINTF : |%5.10x|\n", 52);
	printf("10) standart PRINTF : |%20.15x|\n", -100000);
	ft_printf("10) my       PRINTF : |%20.15x|\n", -100000);
	printf("11) standart PRINTF : |%15.20x|\n", -100000);
	ft_printf("11) my       PRINTF : |%15.20x|\n", -100000);
	printf("17) standart PRINTF : |%.x|\n", 0);
	ft_printf("17) my       PRINTF : |%.x|\n", 0);
	printf("18) standart PRINTF : |%.x|\n", 88);
	ft_printf("18) my       PRINTF : |%.x|\n", 88);


    // printf("-----------------------STRINGS-----------------------\n\n\n");
    // my = ft_printf("%10.2s\n", "toto");
    // st = printf("%10.2s\n", "toto");
    // if (len) {printf("ft_printf: %d, printf: %d\n", my, st);}



}