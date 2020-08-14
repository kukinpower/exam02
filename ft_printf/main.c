
#include <stdio.h>

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