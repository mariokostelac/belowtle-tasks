#Parovi

Timelimit: **1s** Memory limit: **32MB**

**The distance** between two integers is defined as **the sum of the
absolute result of subtracting** their digits. For example, the distance
between the numbers 4561 and 3278 is |4 – 3| + |5 - 2| + |6 - 7| + |1 -
8| = 12. If one of the numbers consists of fewer digits than the other,
we fill it with leading zeroes. Therefore, the distance between the
numbers 32 and 5678 is |0 - 5| + |0 - 6| + |3 - 7| + |2 - 8| = 21.

You are given two integers **A** and **B**. Calculate the sum of
distances between each pair of numbers belonging in the interval [**A**,
**B**]!

### Input
> The first and only line of input contains integers **A**, **B** and
> **K** (1 ≤ **A** ≤ **B** ≤ 10<sup>50000</sup>, 1 ≤ **K** ≤ 10<sup>6</sup>).

### Output
> The first and only line of output must contain the required number from
> the text. Given that the number could be extremely large, output answer
> **modulo** 1 000 000 007.

### Sample Tests
_input_

```
1 5
```

_output_

```
40
```

---

_input_

```
288 291
```

_output_

```
76
```

**Clarification:** The distances are, respectively, (288, 289) = 1, (288, 290) = 9, (288, 291) = 8, (289, 290) = 10, (289, 291) = 9, (290, 291) = 1. Each of them counts twice, which is in total 2 \* (1 + 9 + 8 + 10 + 9 +1) = 76.   

---

_input_

```
1000000 10000000
```

_output_

```
581093400
```