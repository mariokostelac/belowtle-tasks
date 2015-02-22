# Kruznice

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest6_tasks.pdf*

Enjoying a casual afternoon walk in the coordinate system, little Luka
has encountered **N** **unique** circles with its centers lying on the
x-axis. The circles **do not intersect**, but they **can touch** (from
the inside and the outside). Fascinated with circles, Luka wondered how
many **regions** the circles divide the plane into. Of course, you are
going to help him answer this question.

A **region** is a set of points such that each two points can be
connected with a **continuous** curve, without cutting through any of
the circles.

![](/_static/img/tasks/kruznice.png)

*One of the possible layouts of circles*

### Input
> The first line of input contains the integer **N** (1 ≤ **N** ≤ 300
> 000), the number of circles.
>
> Each of the following **N** lines contains two integers **x<sub>i</sub>** and
> **r<sub>i</sub>** (-10<sup>9</sup> ≤ **x<sub>i</sub>** ≤ 10<sup>9</sup>, 1 ≤ **r<sub>i</sub>** ≤ 10<sup>9</sup>), the > number
> **x<sub>i</sub>** representing the x coordinate of the **i<sup>th</sup>** circle and the
> number **r<sub>i</sub>** representing the radius of the **i<sup>th</sup>** circle.
>
> All the circles in the input will be unique.

### Output
> The first and only line of output must contain the required number from
> the task.

### Sample Tests
_input_

```
2
1 3
5 1
```

_output_
```
3
```

---

_input_

```
3
2 2
1 1
3 1
```

_output_
```
5
```

---

_input_

```
4
7 5
-9 11
11 9
0 20
```

_output_
```
6
```

**Clarification:** The example corresponds to the image in the task statement.