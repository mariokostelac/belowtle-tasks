# Divljak

*(Original task can be found in pdf on http://hsin.hr/coci/contest5_tasks.pdf)*

Timelimit: **4s** Memory limit: **768MB**.

**NOTE: we are sorry, but we are not in position to give you 768MB RAM**.

Nowadays, there are a lot of unusual people. We won’t go into details,
but instead focus on a certain type, to us personally the most
interesting people. Of course, we’re talking about barbarians! There are
a lot of barbarians, but only a few of them are truly important. This
story has **N** important barbarians, denoted with integers from **1** to
**N**. Each of them has their own stone tablet with their word written on
it, consisting of only lowercase letters of the English alphabet. Our
barbarians are playing an interesting game with their good friend
Tarzan. The game is played in **Q** rounds. There are two round types and
each is determined by Tarzan:

-   Tarzan show the word **P** to the barbarians.

-   Tarzan ask the barbarian denoted with **S** the following question:
    “Out of all the words I’ve shown you so far, how many of them are
    such that the word on your stone tablet is their consecutive
    substring?”

Given the fact that the barbarians go wild a lot and aren’t really able
to pay attention and keep up what’s happening in the game, they need
your help. Help the barbarians answer each of Tarzan’s questions
correctly.

### Input
> The first line of input contains the integer **N**
> (**1 ≤ N ≤ 10<sup>5</sup>**), the number of barbarians.
>
> Each of the following **N** lines contains a single word consisting of only lowercase
> letters of the English alphabet, the **i**<sup>th</sup> word corresponding to the
> word on the stone tablet of barbarian denoted with **i**.
>
> After that, the
> integer **Q** (**1 ≤ Q ≤ 10<sup>5</sup>**) follows, the number of
> rounds in the game. The following **Q** lines describe the round of the
> game, the **i**<sup>th</sup> line describing the **i**<sup>th</sup> round of the game.
>
> Each line will contain the integer **O**. In the case when **O** is equal to 1,
> it denotes the first type of round and the shown word **P** follows in the
> same line, consisting of only lowercase letters of the English alphabet.
>
> In the case when **O** is equal to 2, it denotes the second type of round
> and the number **S** (**1 ≤ S ≤ N**) follows in the same
> line, the label of the barbarian whom Tarzan asked the question.

> The total length of all words written on the barbarians’ stone tablets will
> not exceed **2*10<sup>6</sup>**.
>
> The total length of all words that Tarzan shows to the barbarians will
> not exceed **2*10<sup>6</sup>**.

### Output
> For each round of a different form, output a single line. The **i**<sup>th</sup>
> line must contain the correct answer to Tarzan’s question in the **i**<sup>th</sup>
> round of type 2.

In test cases worth 50% of total points, it will hold
**N ≤ 20,000**.

### Sample tests

_input_

```
3
a
bc
abc
3
1 abca
2 1
2 3
```

_output_

```
1
1
```

**Clarification:** The only word Tarzan has
spoken is abca. The answer to the first question is, of course, 1
because the word a is a substring of the word abca. The answer to the
second question is also 1 because the word abc is a substring of the
word abca.

---

_input_

```
7
abba
bbaa
b
bbaa
abba
a
ba
7
1 aaabbabbaab
2 7
1 baabaaa
1 aabbbab
2 3
1 aabba
2 3
```

_output_

```
1
3
4
```