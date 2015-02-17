#Slom

Timelimit: **1s** Memory limit: **32MB**

Little Marin spent all his day generating test data for COCI. He simply
couldn't make it work, so he had a nervous breakdown and can't even see
clearly anymore. Every time he blinks while reading, the letters in a
word get mixed up so that the letters from the second half of the word
(the shorter half, if the length is an odd number) "jump in" between the
letters from the first half in the following way:

-   the last letter "jumps in" between the first and the second letter

-   the penultimate letter "jumps in" between the second and the third
    letter

-   the **k**^th^ letter from the end "jumps in" between the **k**^th^
    and the (**k+1**)^th^ letter from the beginning

For example, the word "abcdef" would become "afbecd" after blinking.

If Marin blinks again, the same thing happens. After two blinks, the
word "abcdef" becomes "adfcbe".

Marin has decided to write a program to help him determine what's
exactly written on the screen. Unfortunately, after a day's work, he's
simply too tired and he needs your help. You are given **X**, the number
of blinks, and the word Marin sees on the screen. Write a program to
solve the mystery for Marin and determine what was actually the word
before he blinked **X** times.

### Input
> The first line of input contains a positive integer **X** (1 ≤ **X** ≤ 1
> 000 000 000), the number of times Marin blinked.
>
> The second line of input contains the word from the screen, its length
> being from the interval [3, 1000]. The word will consist only from small
> letters of English alphabet.

### Output
> The first and only line of output must contain the original word, before
> Marin blinked **X** times.

### Sample Tests
_input_

```
4
acefdb
```

_output_
```
abcdef
```

**Clarification:** The word gets altered in the
following order: abcdef, afbecd, adfcbe, aedbfc, acefdb.

---


_input_

```
1000
aaaaaa
```

_output_
```
aaaaaa
```

---


_input_

```
11
srama
```

_output_
```
sarma
```