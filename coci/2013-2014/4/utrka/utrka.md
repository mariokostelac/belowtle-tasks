# Utrka

Timelimit: **2s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest4_tasks.pdf*

Mirko and Slavko are the only two contestants at the Grand Prix of
Dabrovina Donja which is driven through nearby villages. The villages
are connected via **one-way** roads, and for each road **i** we know
**M<sub>i</sub>** and **S<sub>i</sub>**, the time necessary for Mirko and Slavko to
cross that road. The race itself is circular (meaning it starts and
begins in the same village), but the route itself hasn't been determined
yet.

Mirko has bribed the organisers of the race so they'd pick a route in
his favour. Specifically, the organisers are going to pick **the
shortest route** (containing the minimal number of roads) such that
Mirko is **strictly faster** than Slavko on that route. If, by any
chance, there are several such routes, the organisers choose the one
where Mirko gains **maximal** advantage.

### Input
> The first line of input contains two integers **N**, **M** (2 ≤ **N** ≤
> 300, 2 ≤ **M** ≤ **N**(**N**-1)), the number of villages and the number
> of connecting roads.
> 
> Each of the following **M** lines contains 4 integers **A<sub>i</sub>**,
> **B<sub>i</sub>**, **M<sub>i</sub>**, **S<sub>i</sub>** (1 ≤ **A<sub>i</sub>**,
> **B<sub>i</sub>** ≤ **N**, **A<sub>i</sub>** ≠
> **B<sub>i</sub>**, 0 ≤ **S<sub>i</sub>**, **M<sub>i</sub>** ≤ 10<sup>6</sup>). Respectively, the initial and
> ending village of the **i-th** road, the time necessary for Mirko and
> the time necessary for Slavko to cross that road. There won't exist two
> different roads that connect the same pair of villages in the same
> direction.

### Output
> The first and only line of output must contain two integers: the
> shortest possible route (with the minimal number of roads) such that
> Mirko wins, and the maximal advantage Mirko can gain on a route of the
> shortest length.

**Please note:** The input data will be such that a route which meets
the conditions from the text will always exist.

### Sample Tests
_input_

```
3 4
1 2 3 0
2 3 3 0
3 1 0 100
2 1 0 4
```

_output_
```
2 1
```

---

_input_

```
5 7
1 2 4 1
2 3 5 1
3 1 1 6
1 3 15 5
2 4 7 5
4 5 1 4
5 3 1 0
```

_output_
```
5 2
```