#Okviri

Timelimit: **1s** Memory limit: **32MB**

“Peter Pan frames” are a way of decorating text in which every character is framed by a diamond-shaped
frame, with frames of neighbouring characters interleaving. A Peter Pan frame for one letter
looks like this ('X' is the letter we are framing):

```
..#..
.#.#.
#.X.#
.#.#.
..#.. 
```

However, such a framing would be somewhat dull so we'll frame every third letter using a “Wendy
frame”. A Wendy frame looks like this: 

```
..*..
.*.*.
*.X.*
.*.*.
..*.. 
```

When a Wendy frame interleaves with a Peter Pan frame, the Wendy frame (being much nicer) is
put on top. For an example of the interleaving check the sample cases. 

### Input
> The first and only line of input will contain at most 15 capital letters of the English alphabet. 

### Output
> Output the word written using Peter Pan and Wendy frames on 5 lines. 

### Sample Tests
_input_

```
A
```

_output_

```
..#..
.#.#.
#.A.#
.#.#.
..#..
```

---


_input_

```
DOG
```

_output_

```
..#...#...*..
.#.#.#.#.*.*.
#.D.#.O.*.G.*
.#.#.#.#.*.*.
..#...#...*.. 
```

---

_input_

```
ABCD
```

_output_

```
..#...#...*...#..
.#.#.#.#.*.*.#.#.
#.A.#.B.*.C.*.D.#
.#.#.#.#.*.*.#.#.
..#...#...*...#.. 
```