# Graskrizja

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest6_tasks.pdf*

Peatown has become a metropolis. We can observe it as a rectangular grid
of streets. There are fifty thousand vertical streets running
north-south (labeled with x-coordinates from 1 to 50 000) and fify
thousand horizontal streets running east-west (labeled with
y-coordinates from 1 to 50 000). All streets are two-way streets. An
intersection of a horizontal and vertical street is called a crossroads.

Residents of Peatown are very irresponsible and reckless. They drive
like idiots so the mayor of Peatown has decided to place traffic lights
on **N** crossroads. A **path** between two crossroads is **dangerous**
if there is **a turn without a traffic light**. Otherwise it is
harmless.

It is not possible to ensure that all paths are harmless, but the mayor
of Peatown is satisfied if **between each two traffic lights** at least
**one of the shortest paths** is **harmless**. Unfortunately, the
current distribution of traffic lights is too dangerous. Your task is to
place **additional traffic lights** (less than 700 000 of them) so that
the set of traffic lights (which contains both new and old traffic
lights) meets the mayor's requirement. Surely you're not pea-brained so
help the residents of Peatown!

### Input
> The first line of input consists of an integer **N** (2 ≤ **N** ≤ 50
> 000), the number of initially placed traffic lights.
> 
> Each of the following **N** lines contains a location of one traffic
> light, represented with integers **X** and **Y** (1 ≤ **X**, **Y** ≤ 50
> 000), coordinates of the vertical and horizontal streets which intersect
> in that crossroads. All traffic lights will be unique.

### Output
> The first line of input consists of an integer **N** (2 ≤ **N** ≤ 50
> 000), the number of initially placed traffic lights.
> 
> Each of the following **N** lines contains a location of one traffic
> light, represented with integers **X** and **Y** (1 ≤ **X**, **Y** ≤ 50
> 000), coordinates of the vertical and horizontal streets which intersect
> in that crossroads. All traffic lights will be unique.

### Sample Tests
_input_

```
2
1 1
3 3
```

_output_

```
1 3
```

---

_input_

```
3
2 5
5 2
3 3
```

_output_

```
3 5
5 3
```

---

_input_

```
5
1 3
2 5
3 4
4 1
5 2
```

_output_

```
1 5
3 3
3 5
4 2
4 3
```