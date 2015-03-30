# Klopka

Timelimit: **1s**
Memory limit: **32MB**

The city of Osijek has recently been plagued by a swarm of mosquitoes. The solution to this problem was proposed long ago by Mr. Perk, a brave inventor from Benkovci, in an episode of the TV-show Gitak called ["Globalno sjelo"](https://www.youtube.com/watch?v=mutagnjp_VA). Among other inspiring inventions, he presented a mosquito trap. It is basically a box with which you cover the mosquito after it falls for the piece of cheese or "kajmak" you placed there, depending on what your mosquitoes prefer. Simple, isn't it?

If you're lucky, the box can cover more than one mosquito. You have spotted **N** mosquitoes on the table and know their positions precisely. **What is the area of the smallest square-shaped box that can, placed parallel to the sides of the table, cover all the mosquitoes?** The box, of course, can cover the mosquito with its edge.

### Input
> The first line of input contains the integer **N** (2 <= **N** <= 20), the number of spotted mosquitoes.
>
> Each of the following **N** lines contains the positions of mosquitoes as space-separated integer coordinates **X** and **Y** (1 <= **X**, **Y** <= 100)
> in an imaginary coordinate system whose axes are the sides of the table. At least two mosquitoes will be in different positions.

### Output
> The first and only line of output must contain the required area of the smallest **square-shaped** box (expressed, of course, in unit squares of the aforementioned coordinate system).

### Sample tests
_input_

```
3
3 4
5 7
4 3
```

_output_
`16`

---

_input_

```
4
1 5
5 1
10 5
5 10
```

_output_
`81`

**Clarification of the first sample test**: A square with vertices (3,3) and (7,7) solves all the problems.