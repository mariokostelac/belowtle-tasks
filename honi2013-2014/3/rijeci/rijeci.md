#Rijeci

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest3_tasks.pdf*

One day, little Mirko came across a funny looking machine! It consisted
of a **very very large** screen and a single button. When he found the
machine, the screen displayed only the letter A. After he pressed the
button, the letter changed to B. The next few times he pressed the
button, the word transformed from B to BA, then to BAB, then to BABBA...
When he saw this, Mirko realized that the machine alters the word in a
way that all the letters B get transformed to BA and all the letters A
get transformed to B.

Amused by the machine, Mirko asked you a very difficult question! After
**K** times of pressing the button, how much letters A and how much
letters B will be displayed on the screen?

### Input
> The first line of input contains the integer **K** (1 ≤ **K** ≤ 45), the
> number of times Mirko pressed the button.

### Output
> The first and only line of output must contain two space-separated
> integers, the number of letters A and the number of letter B.

### Sample Tests
_input_

```
1
```

_output_
```
0 1
```

---


_input_

```
4
```

_output_
```
2 3
```

  ---


_input_

```
10
```

_output_
```
34 55
```