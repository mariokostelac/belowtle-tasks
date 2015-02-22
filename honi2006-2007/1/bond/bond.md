# Bond

Timelimit: **1s** Memory limit: **32MB**

Everyone knows of the secret agent double-oh-seven, the popular Bond (James Bond). A lesser
known fact is that he actually did not perform most of his missions by himself; they were instead
done by his cousins, Jimmy Bonds. Bond (James Bond) has grown weary of having to distribute
assign missions to Jimmy Bonds every time he gets new missions so he has asked you to help him
out.

Every month Bond (James Bond) receives a list of missions. Using his detailed intelligence from past
missions, for every mission and for every Jimmy Bond he calculates the probability of that particular
mission being successfully completed by that particular Jimmy Bond. Your program should process
that data and find the arrangement that will result in the **greatest** probability that **all** missions are
completed successfully.

**Note**: the probability of all missions being completed successfully is equal to the product of the
probabilities of the single missions being completed successfully. 

### Input
> The first line will contain an integer **N**, the number of Jimmy Bonds and missions (1 ≤ **N** ≤ 20).
> 
> The following **N** lines will contain **N** integers between 0 and 100, inclusive. The **j**-th integer on the **i**-th
> line is the probability that Jimmy Bond **i** would successfully complete mission **j**, given as a percentage. 

### Output
> Output the maximum probability of Jimmy Bonds successfully completing all the missions, as a percentage. 

**Note**: Outputs within ±0.000001 of the official solution will be accepted. 

### Sample Tests
_input_

```
2
100 100
50 50 
```

_output_
```
50.000000 
```

---

_input_

```
2
0 50
50 0 
```

_output_
```
25.00000
```

---

_input_

```
3
25 60 100
13 0 50
12 70 90 
```

_output_
```
9.10000
```

**Clarification**: If Jimmy bond 1 is assigned the 3rd mission, Jimmy Bond 2 the 1st mission and Jimmy Bond 3 the 2nd
mission the probability is: 1.0 * 0.13 * 0.7 = 0.091 = 9.1%. All other arrangements give a smaller probability of success.