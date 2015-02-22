#Guma

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest4_tasks.pdf*

A factory called Gumi-Gumi is dedicated to making tires. Their carving
machine is responsible for carving fillisters into the tire. The tire
has **N** vertical fillisters which divide the rubber into **N**+1
vertical parts. Horizontal cuts are made on each vertical part so that
all parts comprising the vertical part are of **equal size**. The
machine can make fillisters on **one or more** **not necessarily
continuous** vertical sections in one cut, but it can only cut in a
**straight** **line**.

An example of a tire cutting strategy, corresponding to the third sample
test.

![](/_static/img/tasks/guma.png)

The topmost and the lowest lines represent a full horizontal cut,
whereas the first and the last vertical lines are the ends of the tire.

You are given the shape of the tire. Your task is to calculate the
minimal possible number of cuts necessary in order to obtain such shape.

### Input
> The first line of input contains the integer **N** (1 ≤ **N** ≤ 100
> 000).
> 
> Each of the following **N**+1 lines contains an integer **a<sub>i</sub>** (1 ≤
> **a<sub>i</sub>** ≤ 100 000), representing the number of parts which the i-th
> vertical section should consist of.

### Output
> The first and only line of output must consist of the minimal number of
> cuts required.

### Sample Tests
_input_

```
1
2
5
```

_output_
```
5
```

---

_input_

```
2
3
7
14
```

_output_
```
15
```

---

_input_

```
9
4
2
4
1
2
2
2
8
4
2
```

_output_
```
7
```