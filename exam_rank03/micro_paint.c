#include <stdio.h>
#include <unistd.h>

int width, height;
char bg;
char *artboard;
float x, y, w, h;
char color, type;
FILE    *fileptr;

_Bool   get_zone()
{
    int i = 0;

    if (fscanf(fileptr, "%d %d %c\n", &width, &height, &bg) != 3)
        return (1);
    if (!(width > 0 && width <= 300) || !(height > 0 && height <= 300))
        return (1);
    if (!(artboard = malloc(width * height)))
        return (1);
    while (i < width * height)
        artboard[i++] = bg;
    
}

int     main(int ac, char **av)
{
    if (!(fileptr = fopen(av[1], "r")) || get_zone())
    {
        write(1, "Error: Operation file corrupted\n", 33);
        return (1);
    }

    if (ac != 2)
    {
        write(1, "Error: argument\n", 16);
        return (1);
    }
    
}
