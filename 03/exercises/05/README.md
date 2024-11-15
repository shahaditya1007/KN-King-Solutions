# Exercise 3.5

Suppose that we call `scanf` as follows:

```c
scanf("%f%d%f", &x, &i, &y);
```

If the user enters

```
12.3 45.6 789
```

what will be the values of `x`, `i` and `y` after the call? (Assume that `x` and
`y` are `float` variables and `i` is an `int` variable.)

# Solution

```
x = 12.3
i = 45
y = 0.6
```

`789` is put-back.
