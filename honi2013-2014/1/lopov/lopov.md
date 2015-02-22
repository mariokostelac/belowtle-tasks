# Lopov

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest1_tasks.pdf*

The difficult economic situation in the country and reductions in
government agricultural subsidy funding have caused Mirko to change his
career again, this time to a thief. His first professional endeavour is
a jewellery store heist.

The store contains **N** pieces of jewellery, and each piece has some
mass **M~i~** and value **V<sub>i</sub>**. Mirko has **K** bags to store his
loot, and each bag can hold some maximum mass **C<sub>i</sub>**. He plans to
store all his loot in these bags, but **at most one** jewellery piece in
each bag, in order to reduce the likelihood of damage during the escape.

Find the maximum total jewellery value that Mirko can “liberate”.

### Input
> The first line of input contains two numbers, **N** and **K** (1 ≤
> **N**, **K** ≤ 300 000).
>
> Each of the following **N** lines contains a pair of numbers, **M<sub>i</sub>**
> and **V<sub>i</sub>** (1 ≤ **M<sub>i</sub>**, **V<sub>i</sub>** ≤ 1 000 000).
>
> Each of the following **K** lines contains a number, **C<sub>i</sub>** (1 ≤
> **C<sub>i</sub>** ≤ 100 000 000).
>
> All numbers in the input are positive integers.

### Output
> The first and only line of output must contain the maximum possible
> total jewellery value.

### Sample Tests
_input_

```
2 1
5 10
100 100
11
```

_output_
```
10
```

---


_input_

```
3 2
1 65
5 23
2 99
10
2
```

_output_
```
164
```

**Clarification**: Mirko stores the first piece of
jewellery into the second bag and the third piece into the first bag.