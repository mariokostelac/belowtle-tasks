#Obilazak

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest5_tasks.pdf*

Little Mirko has paid a touristic visit to a village nearby **Donji
Andrijevci**, a town in Slavonia. As it happens, the arrangement of
streets in the village looks awfully familiar to the shape of a perfect
binary tree of the order **K**. A perfect binary tree of order **K**
consists of 2**<sup>K</sup>** - 1 nodes arranged in **K** levels (just like in
the image). Each node contains a building labeled with a house number.
Moreover, all buildings but the ones in the last level have a left and
right child (see the image again).

![](/_static/img/tasks/obilazak.png)

Mirko has visited all the buildings in a village and noted down the
exact entrance order. Now he wants to describe to you how the village
looks like, but he can't quite remember. Luckily, he remembers the way
in which he visited the buildings:

1.  in the beginning, he was standing in front of the only building in
    the first level

2.  if the building which he is currently standing in front of has a
    left child which he hasn't visited yet, he will move in front of the
    left child

3.  if the building doesn't have a left child or he has already visited
    it, he will enter the current building and write its house number on
    his paper

4.  if he has already visited the current building and the building has
    a right child, he will move in front of the right child

5.  if he has visited the current building and its left and right child,
    he will return to the parent of the current building

After visiting the villages in the pictures above, the paper would look
like this: 2-1-3 for the first village and 1-6-4-3-5-2-7 for the second
village. Write a programme to help Mirko reconstruct the order of house
numbers on each level.

### Input
> The first line of input contains the integer **K** (1 ≤ **K** ≤ 10), the
> number of levels of the village Mirko just visited.
> 
> The second line of input contains 2<sup>K</sup> integers, the sequence of house
> numbers on Mirko's paper. The house numbers will be unique and from the
> interval [1, 2**<sup>K</sup>**].

### Output
> The output must consist of **K** lines. The **i-th** line must contain
> the sequence of house numbers in the **i-th** level of the village.

### Sample Tests
_input_

```
2
2 1 3
```

_output_

```
1
2 3
```

---

_input_

```
3
1 6 4 3 5 2 7
```

_output_

```
3
6 2
1 4 5 7
```