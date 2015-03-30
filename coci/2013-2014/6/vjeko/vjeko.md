# Vjeko

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest6_tasks.pdf*

In his spare time, Vjeko likes to browse through files in directories.
Unfortunately, it seems to him that the console on his computer broke
down and now it doesn't correctly print file names that match a certain
pattern.

A pattern is string consisting of **lowercase letters of the English
alphabet** and **exactly one** asterisk. A file name matches a pattern
if the pattern string can be made equal to the file name by replacing
the asterisk with an **arbitrary** string of lowercase letters of the
English alphabet (an empty string substitution is also possible). For
example, strings “abcd”, “ad” and “anestonestod” all match the pattern
“a\*d” and the string “bcd” does not.

Write a programme that will, given a pattern and file names, output
whether a file name matches the pattern or not.

### Input
> The first line of input contains the integer **N** (1 ≤ **N** ≤ 100),
> the number of files.
>
> The second line of input contains a string of characters consisting of
> only lowercase letter of the English alphabet and exactly one asterisk
> (ASCII value 42). The length of the string will not exceed 100 and the
> asterisk will not be located at the beginning nor at the end of the
> string.
>
> Each of the following **N** lines contains file names, each in its own
> line. The file names consist of only lowercase letters of the English
> alphabet and their length will not exceed 100.

### Output
> Output **N** lines. The **i^th^** line should be “DA” (Croatian for yes)
> if the **i-th** file name matches the pattern or “NE” (Croatian for no)
> if the **i-th** file name does not match the pattern.

### Sample Tests
_input_

```
3
a*d
abcd
anestonestod
facebook
```

_output_

```
DA
DA
NE
```

---

_input_

```
6
h*n
huhovdjestvarnomozedocisvastan
honijezakon
atila
je
bio
hun
```

_output_

```
DA
DA
NE
NE
NE
DA
```