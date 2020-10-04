# ✅ EXAM02

(School 21, Ecole 42 EXAM02)

## My solutions
### Level 1
1. [inter](https://github.com/kukinpower/exam02/blob/master/inter/inter.c)
2. [union](https://github.com/kukinpower/exam02/tree/master/union/union.c)

### Level 2
1. [get_next_line](https://github.com/kukinpower/exam02/tree/master/gnl)
2. [ft_printf](https://github.com/kukinpower/exam02/tree/master/ft_printf)


## Advice part

### get_next_line

Compile and run get_next_line with standart input. then pass several lines. Don't stop gnl and while it's run open new terminal window. and there run `leaks` with executable that's on run.Example: `leaks get_next_line`. Leaks will find the process and show analytics.

If you want to test get_next_line with some file and not rewrite it: in `main`:

```
close(0);
open("get_next_line.c", O_RDONLY);
while ((bytes_read = get_next_line(&line)) > 0)
...
```

### ft_printf

Don't forget to test: 
```
ft_printf("%.d", 0);
```
And many [other cases](https://github.com/kukinpower/exam02/blob/master/ft_printf/main.c).