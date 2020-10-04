#include <stdio.h>
#include <unistd.h>

int width, height;
char bg;
char *artboard;
float x, y, w, h;
char color, type;
FILE    *fileptr;

int     is_hit(float i, float j)
{
    if (i < x || i > x + w || j < y || j > y + h)
        return (0);
    else if (i - x < 1 || x + w - i < 1 || j - y < 1 || y + h - j < 1)
        return (2);
    else
        return (1);
}

void    draw()
{
    int i = 0;
    int j;
    int hit;

    while (i < width)
    {
        j = 0;
        while (j < height)
        {
            hit = is_hit((float)i, (float)j);
            if (hit == 2 || (hit == 1 && type == 'R'))
                artboard[i + j * width] = color;
            j++;
        }
        i++;
    }
}

_Bool   get_zone()
{
    int i = 0;
    int res = 0;

    if (fscanf(fileptr, "%d %d %c\n", &width, &height, &bg) != 3)
        return (1);
    if (!(width > 0 && width <= 300) || !(height > 0 && height <= 300))
        return (1);
    if (!(artboard = malloc(width * height)))
        return (1);
    while (i < width * height)
        artboard[i++] = bg; // fill array with bg char
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

void    print_artboard()
{
    int i = 0;

    while (i < height)
    {
        write(1, artboard + i * width, width);
        write(1, "\n", 1);
        i++;
    }
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
