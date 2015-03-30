# Kolinje

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest3_tasks.pdf*

**WARNING**: checker for this task is not correct. If you are willing to write a checker for this task or if you found that any other checkers are not correct, please contact mario.kostelac@gmail.com

Melita has just returned from the annual pig slaughter. Don't worry,
this is a regular thing in Croatia. The best part was the abundance of
food! There was everything, starting from good spicy sausages, ham,
black pudding, up to teewurst, top quality bacon and čvarci, all with
warm white bread and butter. After these appetizers, it was the perfect
time to whip up a deep pot full of sarma (Melita ate twentyish of them)
as well as a large platter of fine roast pork, so soft that it almost
melts in your mouth. They watered all of this down with copious gulps of
the best dry white wine that made them even hungrier.

Butcher Bajs kept his award-winning ham for the very end. **N** people
attented the annual pig slaughter, labeled with numbers from 1 to **N**.
These people already ate a lot of meat: the **k^th^** person ate
**A[k]** kilograms of meat so far. Bajs will distribute his ham to the
people **in the ratio B**[1] : **B**[2] : … : **B**[N], exactly in that
order, but he doesn't know the total amount (number of kilos) of ham
which he will be distributing yet.

At the end of the slaughter, the Man of the Year will be declared. A
ranking list is made according to the total kilos of meat eaten. Bajs
impacts directly on this list by choosing the amount of ham to
distribute. Although Bajs has been offered bribes many times, he refused
each time, saying that he was an honest man who would not hurt a fly.

Bajs cares about order, because he's a nice gentleman, and wants to have
the order of people in the exact form of 1, 2, 3, ..., **N**,
respectively from the one who ate the most kilos of meat to those who
ate less, allowing ties between participants. Help Bajs select the total
amount of ham that he will distribute (in the ratio mentioned before) to
achieve his intention.

### Input
> The first line of input contains an integer **N** (2 ≤ **N** ≤ 1000),
> the number of competitors for the Man of the Year award.
>
> Each of the following **k** lines contains integers **A**[**k**] i
> **B**[**k**], as mentioned in the text (0 ≤ **A**[**k**], **B**[**k**] ≤
> 10<sup>6</sup>). At least one of the numbers **B**[**k**] will not be equal to 0.

### Output
> The first and only line of output must contain -1 if the required order
> cannot be achieved. Otherwise, output the required amount of ham in
> kilos, a real number (rounded up to 12 decimal places) between 0 and
> 10<sup>7</sup> (inclusive). If there are multiple possible solutions, output any.

### Sample Tests
_input_

```
3
7 1
3 2
10 0
```

_output_

```
10.5
```

**Clarification:** 10.5 kilos of ham is distributed in the ratio 1 : 2 : 0, which gives us 3.5, 7 and 0 kilos of ham, respectively. If we add this to the already eaten amount of meat, we conclude that the participants ate 10.5, 10 and 10 kilos in total, which is a valid order.   


---

_input_

```
3
2 1
4 0
0 3
```

_output_

```
-1
```

---

_input_

```
5
15 4
6 7
12 5
9 6
1 7

```

_output_

```
87
```