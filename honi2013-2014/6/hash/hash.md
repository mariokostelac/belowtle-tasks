# Hash

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest6_tasks.pdf*

Little Mirko is studying the *hash* function which associates numerical
values to words. The function is defined recursively in the following
way:

-   f( empty word ) = 0

-   f( word + letter ) = ( ( f( word ) \* 33 ) XOR ord( letter ) ) % MOD

The function is defined for words that consist of only lowercase letters
of the English alphabet. XOR stands for the bitwise XOR operator (i.e.
0110 XOR 1010 = 1100), ord(letter) stands for the ordinal number of the
letter in the alphabet (ord(a) = 1, ord(z) = 26) and A % B stands for
the remainder of the number A when performing integer division with the
number B. MOD will be an integer of the form 2**<sup>M</sup>**.

Some values of the hash function when **M** = 10:

-   f( a ) = 1

-   f ( aa ) = 32

-   f ( kit ) = 438

Mirko wants to find out how many words of the length **N** there are
with the *hash* value **K**. Write a programme to help him calculate
this number.

### Input
> The first line of input contains three integers **N**, **K** and **M**
> (1 ≤ **N** ≤ 10, 0 ≤ **K** < 2**<sup>M</sup>**, 6 ≤ **M** ≤ 25).

### Output
> The first and only line of output must consist of the required number
> from the task.

### Sample Tests
_input_

```
1 0 10
```

_output_
```
0
```
**Clarification:** None of the characters in the alphabet has an ord value 0.

---

_input_

```
1 2 10
```

_output_
```
1
```

**Clarification:** It is the word “b”.

---

_input_

```
3 16 10
```

_output_
```
4
```

**Clarification:** Those are the words “dxl”, “hph”, “lxd” and “xpx”.