#Kockice

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest6_tasks.pdf*.

Mirko and Slavko are playing with bricks. Both of them have their own
pile of bricks. The piles consist of **N** columns (where **N** is an
odd number). The number of bricks in the **i-th** column of Mirko's
pile is labeled with **m<sub>i</sub>** and Slavko's pile with **s~i~**.

They have decided to create two **equal** piles constructed in a way
that the heights of columns are **strictly descending** at first and
then **strictly ascending** (see right image below) and the heights of
adjacent columns differ **exactly** by 1 (see image). The lowest of the
columns must have an **equal** number of columns to the left and to the
right of it.

The piles can be modified by removing **one** brick from **the** **top
of some column** and throw it out the window (they **cannot** **reuse**
it) or by taking **one** brick from the box and place it on **the top of
some column** (there is an infinite amount of bricks in the box).
Removing or placing a brick counts as one move.

You have to determine the **minimal** number of moves so that Mirko and
Slavko can rearrange their piles in the described way.

![](/_static/img/tasks/kockice.png)

*On the left, there is a pile with column heights 3, 2, 0, 1 and 4.*

*On the right, there is one of the possible final layouts.*

### Input
> The first line of input contains an **odd** number **N**. (1 ≤ **N** ≤
> 300 000), the number of columns in both piles.
>
> The second line of input contains **N** integers **m<sub>i</sub>** (0 ≤ **m<sub>i</sub>**
> ≤ 10<sup>12</sup>), column heights in Mirko's pile.
>
> The third line of input contains **N** integers **s<sub>i</sub>** (0 ≤ **s<sub>i</sub>** ≤
> 10<sup>12</sup>), column heights in Slavko's pile.

### Output
> The first and only line of output must contain the minimal number of
> moves.

### Sample Tests
_input_

```
3
1 2 3
3 2 2
```

_output_
```
3
```

**Clarification:** Mirko places two bricks on the top the first column in his pile and Slavko places one brick on the top of the third column in his pile.


---

_input_

```
5
2 3 0 1 4
3 3 2 3 1
```

_output_
```
10
```