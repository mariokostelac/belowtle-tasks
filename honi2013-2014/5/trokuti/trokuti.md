#Trokuti

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest5_tasks.pdf*

You are given **N** lines, their equations being **A<sub>i</sub>** x +
**B<sub>i</sub>**y + **C<sub>i</sub>**= 0 in the coordinate plane. Calculate the
number of triangles whose sides lie on the given lines. Since the result
can be very large, output the number modulo 1 000 000 007.

![](/_static/img/tasks/trokuti.png)

**Important note:** No three lines will intersect at the same point.

### Input
> The first line of input contains the integer **N** (1 ≤ **N** ≤ 300
> 000), the number of lines.
> 
> Each of the following **N** lines contains three integers: **A<sub>i</sub>**,
> **B<sub>i</sub>** and **C<sub>i</sub>**, the numbers defining the **i^th^** line.
> 
> All numbers will be lesser than 10<sup>9</sup>.

### Output
> The first and only line of output must consist of the required number
> from the task.

### Sample Tests
_input_

```
6
0 1 0
-5 3 0
-5 -2 25
0 1 -3
0 1 -2
-4 -5 29
```

_output_
```
10
```

**Clarification:** The example corresponds to the image in the task.   

---

_input_

```
5
-5 3 0
-5 -3 -30
0 1 0
3 7 35
1 -2 -1
```

_output_
```
10
```