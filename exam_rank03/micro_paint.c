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
        artboard[i++] = bg; // fill array with bg char
    
    
}

int     main(int ac, char **av)
{
    int res = 0;

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
    while ((res == fscanf(fileptr, "%c %f %f %f %f %c\n", &type, &x, &y, w, &h, &color)) == 6)
    {
        if (w <= 0 || h <= 0 || (type != 'r' && type != 'R'))
            return (1);
        draw();
    }
    if (res != -1)
        return (1);
    return (0);
}
