#Modulo

Timelimit: **1s** Memory limit: **32MB**

Given two integers **A** and **B**, **A** modulo **B** is the remainder when dividing **A** by **B**. For example, the 
numbers `7`, `14`, `27` and `38` become `1`, `2`, `0` and `2`, **modulo 3**. Write a program that accepts 10 numbers 
as input and outputs the number of distinct numbers in the input, if the numbers are considered modulo 42.

### Input
> The input will contain 10 non-negative integers, each smaller than 1000, one per line.

### Output
> Output the number of distinct values when considered modulo 42 on a single line.

### Sample Tests
_input_

```
1  
2  
3  
4  
5  
6  
7  
8  
9  
10 
```

_output_
```
10
```

**Clarification**: the numbers modulo 42 are 1, 2, 3, 4, 5, 6, 7, 8, 9 and 10.

---


_input_

```
42 
84 
252
420
840
126
42 
84 
420
126
```

_output_
```
1
```

**Clarification**: all numbers modulo 42 are 0.

---

_input_

```
39
40
41
42
43
44
82
83
84
85
```

_output_
```
6
```