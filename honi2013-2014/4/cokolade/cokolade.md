# Cokolade

Timelimit: **2s** Memory limit: **32MB**

*Task is originally from http://hsin.hr/coci/archive/2013_2014/contest4_tasks.pdf*

Mirko is a party animal, so he has decided to organise an **endless
amount** of parties for his friends. To satisfy the party's needs, he
has decided to set up **N** tables with **candy** on them. We know the
number of candies **b~i~** on each table. On **the first day** of the
rest of eternity, Mirko is going to invite **one** friend per table, on
**the second day** he will invite **two** friends per table, on **the
third day** **three** friends... In general, obviously, on **the k^th^
day** he is going to invite **k friends** per each table.

When his friends enter the room, **k** people will sit down at each
table and they will divide the candies on their table in **k as large as
possible equal pieces**, and **get rid of the possible remains**. After
the candy division, because of jealousy and various other reasons,
**only tables with the same amount of candy per capita will socialise
together**. Mirko has all eternity to study the social dynamics of his
parties. Firstly, he wants to know the answer to the following question:
given an **s** between 1 and **N**, what is **the earliest day** when
there is a group of **exactly s** tables socialising together?

As usual, Mirko is incapable of solving his own problems, so every few
days he comes to you and asks you what the required number is, given an
**s**. Alas, he has all eternity to ask questions, but you don't.
Therefore, you are going to write a programme which outputs Mirko's
required answers for each **s** from **1** to **N**.

**Please note:** Before each party, Mirko renews the candy supply on
each table, meaning the supplies are equal to those before the first
party. Additionally, all people leave from the current party before the
next one starts.


### Input
> The first line of input contains the integer **N** (1 ≤ **N** ≤ 100).
> 
> The second line of input contains **N** integers, the **i-th** number
> marking the number of candy on the **i-th** table.
> 
> The numbers are from the interval [1, 10<sup>8</sup>].

### Output
> Output **N** lines, each line containing a single integer.
> 
> The **s<sup>th</sup>** line should contain the required number for a group sized
> **s** or -1 if there will never be a group of that size.

### Sample Tests
_input_

```
5
11 10 9 6 4
```

_output_

```
1
2
3
6
12
```

**Clarification:** On the first day, each table will socialise only with itself so the answer for groups sized 1 is 1. Already on the second day, people sitting at tables 1 and 2 are going to get 5 candies per capita and socialise together, so the answer for a group sized 2 is 2.

On the third day, tables 1, 2 and 3 will socialise (because they all have 3 candies per capita).

On the sixth day, tables 1, 2, 3 and 4 will socialise (because they now have 1 candy per capita).

Finally, on the twelfth day, all tables will socialise together because they will all get zero candy per capita.

---

_input_

```
3
5 5 5
```

_output_

```
-1
-1
1
```

**Clarification:** All tables have the same amount of candy per capita, so a group sized less than 3 will never exist.

---

_input_

```
8
12 16 95 96 138 56 205 84
```

_output_

```
1
5
14
49
96
97
139
206
```