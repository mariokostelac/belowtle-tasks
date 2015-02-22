#Domine

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest5_tasks.pdf*

Mirko has a chessboard with **N** rows and just three columns. Slavica
has written an integer on each field. Mirko has **K** dominoes at his
disposal, their dimensions being **2x1**, and has to arrange **all of
them** on the board without overlapping, in a way that each domino
covers exactly two fields of the board. He can rotate the dominoes as he
pleases.

Help Mirko cover **the largest sum of numbers possible** with the
dominoes!

### Input
> The first line of input contains the integer **N** (1 ≤ **N** ≤ 1000),
> the number of rows, and **K** (1 ≤ **K** ≤ 1000), the number of dominoes
> available.
> 
> Each of the following **N** lines contains three integers written in the
> **i-th** row of the board. All numbers will be lesser than 10<sup>6</sup> by
> absolute value.

### Output
> The first and only line of output must contain the maximal sum possible
> to cover with exactly **K** dominoes.

### Sample Tests
_input_

```
5 3
2 1 -1
1 3 2
0 2 3
2 1 1
3 3 0
```

_output_
```
16
```

**Clarification:** It is optimal to place all dominoes horizontally and along the right edge of the second row, right edge of the third row and along the left edge of the final row.   

---

_input_

```
2 2
0 4 1
3 5 1
```

_output_

```
13
```