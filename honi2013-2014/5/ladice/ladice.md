#Ladice

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest5_tasks.pdf*

Mirko has **N** items (labeled with numbers from 1 to **N**) and **L**
drawers (labeled with numbers from 1 to **L**). All items are currently
scattered throughout his room, so he decided to clean them up. Each
drawer can contain one item, and in order to make it easier for Mirko to
find them later, he has determined in advance **exactly two** drawers
(**A<sub>i</sub>** and **B<sub>i</sub>**) for each item **i**.

Mirko stores the items in order from 1 to **N** using the first rule he
can apply:

1.  If the drawer **A<sub>i</sub>** is empty, he stores the item **i** in that
    drawer

2.  If the drawer **B<sub>i</sub>** is empty, he stores the item **i** in that
    drawer

3.  Try to move the item from **A<sub>i</sub>** to its other drawer; if that
    one's filled too, try moving that item to its other drawer, and so
    on until you either succeed or get back to a previously seen drawer.
    In case of success, store the item **i** in the drawer **A<sub>i</sub>**. In
    case of failure, continue to next rule.

4.  Try moving the item from **B<sub>i</sub>** to its other drawer; if that one's
    filled too, try moving that item to its other drawer, and so on
    until you either succeed or get back to a previously seen drawer. In
    case of success, store the item **i** in the drawer **B<sub>i</sub>**. In
    case of failure, continue to next rule.

5.  Give up and throw away the item **i**.

For given pairs of drawers for each item, determine which items will be
stored and which will be thrown away.

### Input
> The first line of input consists of two integers, **N** and **L** (1 ≤
> **N**, **L** ≤ 300 000), the number of items and the number of drawers.
> 
> Each of the following **N** lines contains two integers: **A<sub>i</sub>** and
> **B<sub>i</sub>** (1 ≤ **A<sub>i</sub>** and **B<sub>i</sub>** ≤ **L**), pair of drawers
> corresponding to the item **i**. The numbers **A<sub>i</sub>** and **B<sub>i</sub>** will
> be different.

### Output
> For each item, respectively, output where it ends up.
>
> In case the item is stored successfully, output "LADICA" (without
> quotes, Croatian word for drawer).
>
> In case the item is thrown away, output "SMECE" (without quotes,
> Croatian word for trash).

### Sample Tests
_input_

```
5 3
1 2
1 3
1 2
1 3
1 2
```

_output_

```
LADICA
LADICA
LADICA
SMECE
SMECE
```

**Clarification:** The first item goes to drawer 1 by rule 1). The second item goes to drawer 3 by rule 2). The third item goes to drawer 2 by rule 2).                                                                                                                                                               
                                                                                                                                                                                                                                                                                                                                             
For the fourth and fifth item, both drawers are already taken and cannot be emptied.

---

_input_

```
9 10
1 2
3 4
5 6
7 8
9 10
2 3
1 5
8 2
7 9
```

_output_

```
LADICA
LADICA
LADICA
LADICA
LADICA
LADICA
LADICA
LADICA
LADICA
```

**Clarification:** The first six items go into drawers 1, 3, 5, 7, 9, 2 (respectively), by rule 1). For the seventh item, applying the rule 3), we try to move the item in drawer 1 to drawer 2, the item in drawer 2 to drawer 3, the item in drawer 3 to drawer 4, which we succeed because the drawer is empty.   
                                                                                                                                                                                                                                                                                                                                             
The eighth item goes to drawer 8 which was empty from the beginning.                                                                                                                                                                                                                                                                       
                                                                                                                                                                                                                                                                                                                                             
For the ninth item, applying the rule 3), we try to move the item in drawer 7 to drawer 8, the item in drawer 8 to drawer 2, the item in drawer 2 to drawer 1, the item in drawer 1 to drawer 5, the item in drawer 5 to drawer 6, which we succeed because the drawer is empty.