# Lozinka

Timelimit: **1s** Memory limit: **32MB**

*Task can be originally found on http://hsin.hr/coci/archive/2013_2014/contest5_tasks.pdf*

Mirko is an evil plotting genius and has gotten hold of a list of all
possible passwords for a certain user account. The first thing he
noticed was all the passwords are of **odd length**. Mirko assumes that
the correct password is the one which can be found in **both the
original and reverse order** in the list. For example, if the word
“tulipan” would be the correct password, the word “napilut” has to also
appear in the list. Given that both words are correct passwords, Mirko
will try to use both, one at a time.

Help Mirko discover what the correct password is and output its length
and central character.

### Input
> The first line of input contains the integer **N** (1 ≤ **N** ≤ 100),
> the number of possible passwords.
> 
> Each of the following **N** lines contains a single word, its length
> being an **odd** **number** **greater than 2 and lesser than 14**. All
> characters are lowercase letters of the English alphabet.

### Output
> The first and only line of output must contain the length of the correct
> password and its central letter. **The solution will be unique**.

### Sample Tests
_input_

```
4
las
god
psala
sal
```

_output_
```
3 a
```

**Clarification:** The required pair of words is “las” and “sal”. Their length is 3 letters and the central character is 'a'.                                         
                                                                                                                                                                                             
---

_input_

```
4
kisik
ptq
tttrp
tulipan
```

_output_
```
5 s
```

**Clarification:** The word “kisik” can be found in both the original and reverse order on the list (the word is a palindrome), so it is a valid correct password.