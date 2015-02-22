# Organizator

Timelimit: **1s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest1_tasks.pdf*

Unexpected problems with law enforcement have convinced Mirko to take up
a less lucrative but less morally ambiguous career: he has become the
chief organiser of a team computer science contest.

There are **N** CS clubs that wish to participate in the contest. The
presidents of the clubs are quite stubborn and will participate in the
contest **only if** the contest team size makes it possible for all club
members to participate.

The contest consists of two rounds: **qualifications** and **finals**.
All teams that are competing must have an **equal** number of members
and **all members** of one team must belong to the same club. Any number
of teams from each club can participate in the qualification round, and
the **best team** from each club earns a spot in the **finals**.

Mirko is aware that, with a new and unproven contest, he needs
publicity. For that reason, he wants to set the team size such that the
**number of individual participants** in the **finals** is as **large**
as possible. Remember, each club that participates has a right to
**one** team in the **finals**. Furthermore, at least **two** clubs must
participate in the contest, otherwise the contest would be too boring to
attract sponsors.

Determine the maximum possible number of participants in the finals so
that Mirko can double check his team size choice.

### Input
> The first line of input contains the positive integer **N** (2 ≤ **N** ≤
> 200 000), the number of clubs.
>
> The second line of input contains **N** space-separated integers from
> the interval [1, 2 000 000], the number of members of each club.

### Output
> The first and only line of output must contain the maximum possible
> number of finalists.

### Sample Tests
_input_

```
3
1 2 4
```

_output_
```
4
```

**Clarification**: Mirko decides on 2 members per team, so clubs 2 and 3 participate.

---


_input_

```
2
1 5
```

_output_
```
2
```

---


_input_

```
5
4 6 3 8 9
```

_output_
```
9
```