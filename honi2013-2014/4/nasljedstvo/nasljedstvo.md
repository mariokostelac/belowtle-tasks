# Nasljedstvo

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest4_tasks.pdf*

A wealthy estate owner is so old that she's at that point in her life
when she can't help talking funny. That is, naturally, the reason why
her loving **N** daughters have started discussing their mother's
heritage.

The youngest is sick and tired of just talking, so she conveniently
decided to grab a hold of her share of the heritage. She knew exactly
where her mother keeps her golden medallions – inside a thick sock in
the third drawer next to the mirror in the hallway! The cunning daughter
found this pile of medallions, split it into **N** equal parts, claimed
her part and put the rest back into the sock. If the medallions couldn't
have been split into **N** identical parts, then the parts were nearly
identical: each differed from another by one medallion at most. In that
case, the daughter claimed one of the smaller parts for herself.

The rest of the daughters found out about this (mis)deed so they counted
the remaining medallions and now they want to know the initial number of
medallions inside the sock, before the youngest one took her share. It
is your task to answer this question. Given that there could be more
than one possible answer, output both the smallest and the largest of
them.

### Input
> The first line of input contains the integer **N** (2 ≤ **N** ≤ 15), the
> number of daughters.
> 
> The second line of input contains the integer **O** (**N** ≤ **O** ≤
> 100), the number of remaining medallions.

### Output
> The first and only line of output must contain two integers: the minimal
> and the maximal possible total number of medallions.

### Sample Tests
_input_

```
2 5
```

_output_
```
9 10
```

**Clarification:** There are two daughters, so that means the youngest daughter took half of the medallions. If there were initially 9 medallions, the youngest took 4, so 5 are remaining. If, by any chance, there were initially 10 medallions, she took 5 so there are also 5 remaining. Hence, the possible answers are both 9 and 10.   

---

_input_

```
3
5
```

_output_
```
7 7
```