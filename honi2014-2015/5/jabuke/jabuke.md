# Jabuke

*(Original task can be found in pdf on http://hsin.hr/coci/contest5_tasks.pdf)*

Timelimit: **2s** Memory limit: **128MB**.

It is often heard that the apple doesn’t fall far from the tree. But is
that really so? The National Statistics Department has tracked the
falling of apples in an orchard for **G** consecutive years. The orchard
can be represented as a matrix with dimensions **R * S**. Each field
of the matrix can contain more than one apple tree. Interestingly
enough, each year there was exactly one apple fall, so the Department
decided to write down **G** pairs of numbers **(r_i, s_i)** that denote the
row and column of the location where the apple fell during the **i**-th
year. Moreover, **by next year**, a new tree grew at that location. Your
task is to determine the squared distance between the nearest tree and
the apple that fell, measured in unit fields of the matrix (we assume it
is that tree from which the apple fell). The distance between fields
**(r_1, s_1)** and **(r_2, s_2)** in the matrix are calculated as:
```d((r_1, s_1), (r_2, s_2)) = sqrt[(r_1-r_2)^2 + (s_1-s_2)^2]```

### Input
> The first line of input contains two integers, **R** and **S**
> (**1 ≤ R, S ≤ 500**), the number of rows and columns of
> the matrix.
>
> Each of the following **R** lines contains **S** characters ’x’
> or ’.’. The character ’.’ denotes an empty field, and the character ’x’
> denotes a field with at least one tree.
>
> The orchard will initially contain at least one tree. After that, an integer **G**
> (**1 ≤ G ≤ 10^5**) follows, the number of years the
> orchard has been under observation.
>
> Each of the following **G** lines describes the falls of the apples.
>
> Each line contains a pair of integers
> **(r_i, s_i)** that denote the row and column of the location where the
> apple fell in the **i**-th year.

### Output
> Output **G** numbers, the required squared distances from the task, each
> in its own line.

In test cases worth 30% of total points, it will hold **G ≤ 500**.

### Sample tests

_input_

```
3 3
x..
...
...
3
1 3
1 1
3 2
```

_output_

```
4
0
5
```

**Clarification:** The closest apple to the
one that fell in the first year is the apple in the field (1,1). The
apple that fell in the second year fell on the exact field where the
tree is located, so the squared distance is 0. The apple that fell in
the third year is equally distant to all three existing trees in the
orchard.

---

_input_

```
5 5
..x..
....x
.....
.....
.....
4
3 1
5 3
4 5
3 5
```

_output_

```
8
8
4
1
```