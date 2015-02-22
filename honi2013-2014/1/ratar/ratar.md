# Ratar

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest1_tasks.pdf*

After Mirko's failed stint as a coach and a passing obsession with
Croatian meat delicacies, his weight problems have motivated him to work
hard as a farmer. He has moved to a village where his friend Slavko
lives. Farmers in the village share a large common plot of land in the
shape of a **N×N** square, divided into **N**² unit squares. A unit
square at coordinates **(i, j)** brings in the income of **A<sub>ij</sub>**,
which can be negative (for example, if the square has to be maintained
but is not cultivated). The farmers always divide the common land into
smaller **rectangular fields** with edges **parallel** to the common
land edges.

Slavko is skeptical of Mirko since his failure as a coach, so he insists
that both of them are assigned land with the **same total income**, but
also thet the two plots share **exactly one** common corner so that the
two friends can keep an eye on each other (Slavko knows that Mirko is
prone to mischief). The common corner must be the only point where the
two plots meet, in order to prevent border-related arguments.

You are given a description of the common land plot. Find the total
number of plot pairs that satisfy Slavko's criteria

### Input
> The first line of input contains the positive integer **N** (1 ≤ **N** ≤
> 50), the dimensions of the common land plot.
> 
> Each of the following **N** lines contains **N** space-separated numbers
> **A<sub>ij</sub>** (-1000 < **A<sub>ij</sub>** < 1000), the income provided by the
> respective cell.

### Output
> The first and only line of output must contain the total number of plot
> pairs satisfying the given condition.

### Sample Tests
_input_

```
3
1 2 3
2 3 4
3 4 8
```

_output_
```
7
```

**Clarification**: The possible rectangle pairs are:
(0,0)-(1,1) and (2,2)-(2,2), (1,0)-(1,0) and (0,1)-(0,1), (2,0)-(2,0) and (1,1)-(1,1), (1,1)-(1,1) and (0,2)-(0,2), (2,1)-(2,1) and (1,2)-(1,2), (2,0)-(2,1) and (0,2)-(1,2), (1,0)-(2,0) and (0,1)-(0,2).


---


_input_

```
4
-1 -1 -1 -1
1 2 3 4
1 2 3 4
1 2 3 4
```

_output_
```
10
```

---


_input_

```
5
-1 -1 -1 -1 -1
-2 -2 -2 -2 -2
-3 -3 -3 -3 -3
-4 -4 -4 -4 -4
-5 -5 -5 -5 -5
```

_output_
```
36
```