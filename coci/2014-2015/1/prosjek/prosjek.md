# Prosjek

*(Original task can be found in pdf on http://hsin.hr/coci/contest1_tasks.pdf)*

Timelimit: **1s**
Memory limit: **32MB**

Mirko is practicing arithmetic operations in an interesting way during math class. First, he writes a sequence of integers **A**. Then, underneath the first sequence, he writes another sequence of integers **B** which he gets by replacing every number from the sequence A with the average value of all the numbers before the current one, including it.

For example, if the first sequence of integers A is equal to
```1, 3, 2, 6, 8```, then the second sequence of integers B is going to be
```1, (1+3)/2, (1+3+2)/3, (1+3+2+6)/4, (1+3+2+6+8)/5```, in other words ```1, 2, 2, 3, 4```.

You are given the second sequence of integers **B**. Determine the first sequence of integers **A** to check Mirko's calculations.

### Input
> The first line of input contains the integer **N** (1 <= **N** <= 100), the length of sequence **B**.
>
> The second line of input contains the sequence of **N** space-separated integers **B<sub>i</sub>** (1 <= **B<sub>i</sub>** <= 10<sup>9</sup>).

### Output
> The first and only line of output must contain a sequence of **N** space-separated integers **A**.
>
> **Please note**: The input data will be such that the elements from the sequence **A** are integers (1 <= **A<sub>i</sub>** <= 10<sup>9</sup>).

### Sample tests
_input_

```
1
2
```
_output_
`2`

---
_input_

```
4
3 2 3 5
```

_output_
`3 1 5 11`

---
_input_

```
5
1 2 2 3 4
```

_output_
`1 3 2 6 8`