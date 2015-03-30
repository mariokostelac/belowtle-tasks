# Zabava

Timelimit: **1s** Memory limit: **256MB** (currently we allow max 128MB)

A new student dorm has been opened! It consists of **M** buildings, labeled with integers from 1 to **M**. The dorm is initially empty, but soon **N** students will be moving in at a rate of exactly one student per day.

Each time a new student moves in a building, a big party is being held inside that building. The noise of the party is equal to the number of students located inside the building. The dorm management is not particularly fond of noise, so they will occasionally empty a certain building to keep the parties at a reasonable noise level. They do this by moving all its residents to a completely different student dorm. The management can decide to do this after any day, but they realised that it doesn't pay off to do it more than **K** times.

Help the management! Knowing which buildings are being moved in by students, determine the minimal possible total noise level (the sum of noise levels of all **N** parties) that can be achieved with emptying some of the buildings at most **K** times.

### Input
> The first line of input contains the integers **N** (1 <= **N** <= 1 000 000), **M** (1 <= **M** <=100) and **K** (1 <= **K** <= 500) from the task description.
> The **i**-th line, out of **N** in total, contains an integer from the interval [1, **M**]: the label of the building where a student is moving in on the **i**-th day.

### Output
> The first and only line of output must contain the required minimal possible total noise level.

### Sample Tests
_input_

```
5 1 2
1
1
1
1
1
```

_output_
```
7
```

**Clarification**: The first and only line of output must contain the required minimal possible total noise level are, respectively, 1, 1, 2, 1, 2. If we didn't empty the building, the noise levels would be 1, 2, 3, 4, 5.

---


_input_

```
11 2 3
1
2
1
2
1
2
1
2
1
2
1
```

_output_
```
18
```

**Clarification**: For example, building 1 is emptied after the fourth and eighth day and building 2 after the sixth day. The noise levels are, respectively, 1, 1, 2, 2, 1, 3, 2, 1, 1, 2, 2.