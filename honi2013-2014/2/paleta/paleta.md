#Paleta

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest2_tasks.pdf*

Little Mirko spends his free time painting. For this hobby, he likes to
use brushes and a pallet containing **K** colors overall. His friend
Slavko decided to use Mirko's talent and gave him his new coloring book
for Mirko to color. The coloring book contains **N** images numbered 1,
2, ..., **N**.

Mirko has decided to paint each image in exactly one color of the
possible **K** colors from his pallet. However, he really likes colorful
things. He chose **N** numbers **f<sub>i</sub>** and decided to paint the image
numbered **i** differently than the images numbered **f<sub>i</sub>**, except
when **f<sub>i</sub> = i**. If **f<sub>i</sub> = i**, that means he can paint the image
numbered **f<sub>i</sub>** whichever color he likes, as long as all other
conditions have been met.

Mirko wants to know the number of possible ways to color Slavko's
coloring book and he desperately needs your help! Calculate the number
of possible ways to color the book. Given the fact that the output can
be very large, print the answer modulo 1 000 000 007.

### Input
> The first line of input contains positive integers **N**, **K** (1 ≤
> **N**, **K** ≤ 1 000 000).
>
> Following line contains **N** numbers **f<sub>i</sub>** (1 ≤ **f<sub>i</sub>**≤
> **N**), the number stated in the text.

### Output
> The first and only line must contain the number of possible ways to
> color Slavko's book.

### Sample Tests
_input_

```
2 3
2 1
```

_output_
```
6
```

**Clarification:** Mirko has three colors and
decided that the image numbered 2 mustn't be of the same color as the
image numbered 1. The possible colorings are (1, 2), (1, 3), (2, 1), (2,
3), (3, 1), (3, 2), where the first number in the brackets represents
the color of the first image and the second number the color of the
second image.

---

_input_

```
3 4
2 3 1
```

_output_
```
24
```

---

_input_

```
3 4
2 1 1
```

_output_
```
36
```

---

_input_

```
3 4
1 1 2
```

_output_
```
36
```


**Clarification:** Mirko has four colors. There
are no conditions regarding the first image, it can be painted in
whichever color. The second must be different than the first, and the
third different than the second. That means that those two images can be
colored in the remaining 3 colors. This gives us a total of 36
combinations.