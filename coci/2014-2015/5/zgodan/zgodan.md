# Zgodan

*(Original task can be found in pdf on http://hsin.hr/coci/contest5_tasks.pdf)*

Timelimit: **1s** Memory limit: **32MB**.

An integer is considered handsome if it has every two consecutive digits
of different parity. For a given integer **N**, what is its closest
handsome number? **Please note:** Numbers consisting of only one digit
are handsome numbers. The distance of two numbers is the absolute value
of their difference.


### Input
> The first and only line of input contains the integer **N** that consists
> of a thousand digits at most and is not handsome.

### Output
> The first and only line of output must contain the required closest
> handsome number. If two closest numbers exist, output both, separated by
> space.

In test cases worth 56 points, it will hold **N < 10^9**.

### Sample tests

_input_
```
13
```

_output_
```
12 14
```

---

_input_
```
5801001
```

_output_
```
5810101
```