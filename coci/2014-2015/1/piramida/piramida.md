# Piramida

Timelimit: **1s** Memory limit: **32MB**

Zoran and Tomislav don't really have anything important to do, so they spend their days doing various activities. Today, they built a pyramid of the height **N** in the back garden and wrote their favorite word on it, repeating it from line to line and changing direction, as shown in the picture.

```
     J
    N A
   J E T 
  J A N I
 A N J E T 
N A J A N I 
```

Tomislav has now chosen **K** lines of the pyramid, marked with and has chosen a letter **c<sub>i</sub>** for each line. Then he asked Zoran **K** tricky questions: "How many times does the letter **c<sub>i</sub>** appear in the row **a<sub>i</sub>**?"

You are Zoran's counselor. Write a programme that will, for the given pyramid height and their favorite word, answer Tomislav's questions.

## Input
> The first line of input contains the integer **N** (1 < **N** < 10<sup>18</sup>).
>
> The second line of input contains a word that consists of only uppercase letters of the English alphabet.
> The word's length will not exceed 10<sup>6</sup>.
>
> The third line of input contains the integer **K** (1 <= **K** <= 50 000), the number of lines Tomislav has chosen.
>
> Each of the following **K** lines contains the pair **a<sup>i</sup>**, **c<sup>i</sup>** (1 <= **a<sup>i</sup>** <= **N**,  **c<sup>i</sup>** uppercase letter of the English alphabet) which represent Tomislav's questions.

## Output
> Output **K** lines. The **i**-th line of output must contain a single integer — the number of appearances of letter **c<sub>i</sub>** in the row.

## Sample tests
_input_

```
6
JANJETINA
5
1 J
1 A
6 N
6 I
5 E
```

_output_

```
1
0
2
0
1
```

---

_input_

```
5
A
5
1 A
2 A
3 A
4 A
5 B
```

_output_

```
1
2
3
4
0
```

---

_input_

```
3
AB
3
2 A
2 B
3 B
```

_output_

```
1
1
2
```