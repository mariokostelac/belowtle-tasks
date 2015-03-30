# Odasiljaci

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest3_tasks.pdf*

The mayor has decided that it is high time to implement a new system of
television transmitters. The city can be represented as **a segment of
the length D** on which there are **buildings** of different heights.
The width of a building is negligible. On top of some buildings,
**television transmitters** are set, their dimensions are also
negligible.

Television transmitters emit a television signal in all directions
around them. The signal is spread through space **in straight lines**
and **cannot pass through buildings**. A certain point in the city is
considered **covered** if it is reached by a signal from an existing
transmitter.

![](/_static/img/tasks/odasiljaci.png)

Find the segment of the city covered by television signal and output its
length.

### Input
> The first line of input contains the integer **N** (1 ≤ **N** ≤ 3 ∙
> 10<sup>5</sup>), the number of buildings, and the integer **D** (1 ≤ **D** ≤
> 10<sup>9</sup>), the city length.
>
> Each of the following **N** lines contains three numbers which describe
> the **i<sup>th</sup>** building:
>
> 1.  a number which determines whether there is a transmitter on top of
>     the building: 0 (no) or 1 (yes)
>
> 2.  an integer **X<sub>i</sub>** (0 ≤ **X<sub>i</sub>** ≤ **D**), the distance between the
>     building and the left end of the city
>
> 3.  an integer **H<sub>i</sub>** (1 ≤ **H<sub>i</sub>** ≤ 10<sup>9</sup>), the building height
>
> The buildings are sorted in ascending order by the distance from the
> left end of the city. No two buildings will be located on the same
> distance from the left end of the city.

### Output
> The first and only line of output must contain the required length from
> the text.
>
> Note: the maximum permissible deviation from the official solution is
> 10<sup>-3</sup>.

### Sample Tests
_input_

```
3 10
1 2 6
0 4 3
0 8 2
```

_output_

```
6.000000
```

---

_input_

```
5 15
0 4 3
1 5 5
1 6 6
0 9 2
0 10 3
```

_output_

```
8.500000
```

**Clarification:** This example corresponds to the
image from the text. The image depicts the city. The buildings are
marked with vertical lines, and the transmitters with circles on the
tops of the buildings. The bold lines on the x-axis represent the
segment of the city not covered by television signal.