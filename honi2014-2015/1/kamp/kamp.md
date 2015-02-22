# Kamp

*(Original task can be found in pdf on http://hsin.hr/coci/contest1_tasks.pdf)*

Timelimit: **2s** Memory limit: **128MB**

In a certain flooded village, a secret superhuman humanitarian camp is being opened as we speak. The village consists of **N** houses marked with integers from 1 to N. The houses are connected to each other with N-1 roads so that there is **a unique way** between each two houses. For each road, we know the time it takes for a truck to pass it. The camp should be put up in some house's garden, but the camp manager still hasn't decided which house it is going to be.

Mirko has been appointed as the driver. His job is to drive around teams of volunteers in his super truck from the camp to the house where that certain team is going to work. His van is super because all teams at once can drive in it! In total, there are **K** teams and all the teams are going to a different house.

**All K** teams board into Mirko's truck initially, and then he drives them to houses in the sequence he determined for himself. After he drives around all teams, Mirko stays and helps the last team **(he doesn't go back to camp)**.

In order for the camp manager to determine where to put up the camp, he wants to know, **for each house, the minimal time** it takes for Mirko to drive around all teams if that **house is the headquarters**. Write a programme that will determine the numbers Mirko's boss wants to see!

### Input
> The first line of input contains the integers **N** (1 <= N <= 500 000), and **K** (1 <= K <= N).
>
> Each of the following **N-1** lines contains integers **Ai**, **Bi**, **Ci** (1 <= Bi <= N, 1 <= Ci <= 1 000 000), where **Ci** is the time it takes
> to pass a two-way road between houses **Ai** and **Bi**.
>
> Each of the following **K** lines contains the integers that mark the house where the **i**-th team is going, respectively.

### Output
> Output N lines.
>
> The i-th line of output must contain the minimal times it takes Mirko to drive around all the teams if the camp headquarters is located in the i-th house.

### Sample tests
_input_

``` c
5 2 
2 5 1
2 4 2
1 2 2
1 3 2
4
5
```
_output_

```
5
3
7
2
2
```

---

_input_

```
7 2
1 2 4
1 3 1
2 5 1
2 4 2
4 7 3
4 6 2
3
7
```

_output_

```
11
15
10
13
16
15
10
```

**Clarification of the first sample test**: If Mirko starts off at house 1, he can drop off volunteers at houses 1-2-4-2-5, respectively. If he starts off at house 2, the possible sequence is 2-5-4.