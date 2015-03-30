# Kusac

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest1_tasks.pdf*

Mirko has given up on the difficult coach job and switched to food
tasting instead. Having skipped breakfast like a professional
connoisseur, he is visiting a Croatian cured meat festival. The most
renowned cook at the festival, Marijan Bajs, has prepared **N** equal
sausages which need to be distributed to **M** tasters such that each
taster gets a precisely equal amount. He will use his trusted knife to
cut them into pieces.

In order to elegantly divide the sausages, the **number of cuts**
splitting individual sausages must be **as small as possible**. For
instance, if there are two sausages and six tasters (the first test case
below), it is sufficient to split each sausage into three equal parts,
making a total of four cuts. On the other hand, if there are three
sausages and four tasters (the second test case below), one possibility
is cutting off three quarters of each sausage. Those larger parts will
each go to one of the tasters, while the fourth taster will get the
three smaller pieces (quarters) left over.

Mirko wants to try the famous sausages, so he volunteered to help Bajs.
Help them calculate the minimum total number of cuts needed to carry out
the desired division.

### Input
> The first and only line of input contains two positive integers, **N**
> and **M** (1 ≤ **N**, **M** ≤ 100), the number of sausages and tasters,
> respectively.

### Output
> The first and only line of output must contain the required minimum
> number of cuts.

### Sample Tests
_input_
```
2 6
```

_output_
```
4
```

---


_input_
```
3 4
```

_output_
```
3
```

---


_input_
```
6 2
```

_output_
```
0
```