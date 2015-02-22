#Linije

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest2_tasks.pdf*

Mirko and his faithful friend Slavko got really bored one day. The
result of their boredom is the creation of a new game! In the beginning
of the game, they draw **N** points in a coordinate system. The players
take turns and Mirko plays first. He draws a straight line which is
parallel to one of the axes of the coordinate system and passes through
one of the **N** points. In the following moves, the player draws a
straight line which is parallel to one of the axes of the coordinate
system and passes through one of the **N** points located on the line
drawn in the previous move of the opponent. No single line must be drawn
twice. The loser is the player who cannot play his move. Determine who
has the winning strategy.

### Input
> The first and only line of input contains the positive integer **N** (1
> ≤ **N** ≤ 10 000).
> 
> Each of the following N lines contains two integers **X** and **Y**, the
> coordinates of the points drawn (1 ≤ **X**, **Y** ≤ 500).

### Output
> The first and only line of output must contain the name of the winner,
> either 'Mirko' or 'Slavko'.

### Sample Tests
_input_

```
3
1 1
1 2
1 3
```

_output_
```
Mirko
```

**Clarification:** If Mirko draws the line y = 1,
Slavko has to draw x = 1. Then Mirko draws the line y = 2, and Slavko's
only remaining move is to draw x = 1 again, which isn't allowed.

---


_input_

```
4
1 1
1 2
2 1
2 2
```

_output_
```
Slavko
```