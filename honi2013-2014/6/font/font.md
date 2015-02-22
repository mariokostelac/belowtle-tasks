#Font

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest6_tasks.pdf*

Little Ivica got himself a summer job at a company that produces
computer fonts. The branch of the company where Ivica works at
specialises in testing computer fonts and Ivica's team is responsible of
testing **only lowercase letters of the English alphabet**.

The letters are tested so that various sentences using those letters are
printed out and then manually (more accurately, visually) checked if
everything is arranged properly. Only sentences which contain **all 26
lowercase letter of the English alphabet (a-z)** are used for testing
purposes. These sentences are called **test sentences**.

You've probably already assumed that Ivica's job is to find test
sentences. He has a dictionary which consists of **N** words and has to
calculate how many different test sentences can be made out of those
words. Every word from the dictionary can be used **only once** in the
sentence and the order of the words in the sentence is **irrelevant**
(i.e. “uvijek jedem sarmu” and “jedem sarmu uvijek” are equal
sentences).

### Input
> The first line of input contains the integer **N** (1 ≤ **N** ≤ 25), the
> number of words in the dictionary.
>
> Each of the following **N** lines contains a single word from the
> dictionary, its length not exceeding 100. All the words from the
> dictionary are going to be **unique**.

### Output
> The first and only line of output must contain the required number from
> the task.

### Sample Tests
_input_

```
9
the
quick
brown
fox
jumps
over
a
sleazy
dog
```

_output_
```
2
```

**Clarification:** All words but the word “a” must be used in the test sentence because each word contains a letter that cannot be found in any other word. Therefore, there are two possible solutions. The first one being the sentence which consists of all the words and the second one being the sentence which consists of all the words apart from the word “a”.

---

_input_

```
3
a
b
c
```

_output_

```
0
```

---

_input_

```
15
abcdefghijkl
bcdefghijklm
cdefghijklmn
defghijklmno
efghijklmnop
fghijklmnopq
ghijklmnopqr
hijklmnopqrs
ijklmnopqrst
jklmnopqrstu
klmnopqrstuv
lmnopqrstuvw
mnopqrstuvwx
nopqrstuvwxy
opqrstuvwxyz
```

_output_

```
8189
```

**Clarification:** Given that the example is long, we stress that all the words from the example consist of consecutive letters of the English alphabet.