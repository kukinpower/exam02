#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int width, height;
float x, y, w, h;
char type, color, bg;
char *artboard;

int     check_hit(float i, float j) {
    if (i < x || i > x + w || j < y || j > y + h)
        return (0);
    if (i - x < 1 || x + w - i < 1 || j - y < 1 || y + h - j < 1)
        return (2);
    return (1);
}

void     draw()
{
    int i = 0, j, hit;

    while (i < width) {
        j = 0;
        while (j < height) {
            hit = check_hit((float)i, (float)j);
            if (hit == 2 || (hit == 1 && type == 'R'))
                artboard[i + j * width] = color;
            j++;
        }
        i++;
    }
}

_Bool    parse(FILE *file)
{
    int i = 0, scan_ret;

    if (fscanf(file, "%d %d %c\n", &width, &height, &bg) != 3)
        return (1);
    if (!(width > 0 && width <= 300 && height > 0 && height <= 300))
        return (1);
    if (!(artboard = malloc(width * height)))
        return (1);
    while (i < width * height)
        artboard[i++] = bg;
    while ((scan_ret = fscanf(file, "%c %f %f %f %f %c\n", &type, &x, &y, &w, &h, &color)) == 6) {
        if (!(w > 0 && h > 0) || !(type == 'R' || type == 'r'))
            return (1);
        draw();
    }
    if (scan_ret != -1)
        return (1);
    return (0);
}

void    output()
{
    int i = 0;
    while (i < height) {
        write(1, artboard + i * width, width);
        write(1, "\n", 1);
        i++;
    }
}

int     main(int ac, char **av)
{
    FILE *file;

    if (ac != 2) {
        write(1, "Error: argument\n", 16);
        return (1);
    }
    if (!(file = fopen(av[1], "r")) || parse(file)) {
        write(1, "Error: Operation file corrupted\n", 32);
        return (1);
    }
    output();
    fclose(file);
    free(artboard);
    return (0);
}