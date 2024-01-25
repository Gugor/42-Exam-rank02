#Reverse Bits
----
##Intro

When we work with bits, we need to take into account the direction in which the most significant bit is stored, the so-called ENDIAN. I sometimes have a hard time memorizing this order, so I created two functions to visualize the direction in which these bits are stored in memory.

##What is this?

In the [test file](https://github.com/Gugor/42-Exam-rank02/edit/main/LEVEL2/reverse_bits/rev-bits-tests.c), you can see that I've created two functions that print the bits from an unsigned char from left to right (L2R) and from right to left (R2L).

```c
void print_l2r_bits(unsigned char octet);
```

```c
void print_r2l_bits(unsigned char octet);
```

If we pass a `\t` -it's equivalent to 9 in `ASCII`- prints (spaces are added for visibility purposes):

```
:: R2L Byte (9)
=> 1001 0000
:: L2R Byte (9)
 0000 1001 <=
```

Seeing this can help you understand better how the computer stores the bits. In my case, this rsult is printed on a macOS Catalina.

The original direction of my system is from left to right, as you can see in the example. Meaning that the most significant bit is on the right.

```
0000 1001 <= (9 in base 10)
```

How do I know what's the original direction?

Well, think of a belt in a production line where on top of the line you have a bunch of boxes labeled with ordered numbers. When you shift the belt from left to right like this (myval >> 1), what you are getting first is the last bit on the right. Like this:

```
First state of the line
     =================================
Indx | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 
     ---------------------------------
Val  | 1 | 0 | 0 | 1 | 0 | 0 | 0 | 0 | 
     =================================
```
```
State shifted right by 1 bit (belt >> 1)
     =================================
Indx | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | -
     ---------------------------------
Val  | 0 | 1 | 0 | 0 | 1 | 0 | 0 | 0 | 0
     =================================
```

If you print what you extract from the belt, you are going to reverse the order of the boxes respecting how they were originally set in the production belt. Now the value contained in index 7 becomes the first value:

```
     =====
Indx | 0 |
     -----
Val  | 0 |
     =====
```

Index 6 becomes 1

```
     =========
Indx | 0 | 1 |
     ---------  ...
Val  | 0 | 0 |
     =========
```
I think you are getting the idea. You keep iterating until you reverse the full order of the boxes on the belt:

```
     =================================
Indx | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
     ---------------------------------
Val  | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |
     =================================
```

I hope you finded this interseting, please let me know if I messed up something in this explanation.

Thanks and cheers! 
