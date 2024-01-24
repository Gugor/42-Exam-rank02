#Reverse Bits
---
## Intro
When we work with bits we need to have in account the direction the most significant bit is stored, the so colled ENDIAN. I some time have a bad time to memorize this order so I created two functions to see visualy the direction in wich this bits are stored in memory.

## What it this?
In the test file you can see that I've created two functions that prints the bits from a `unsigned char` from left to right (L2R) and from right to left (R2L). 

If we pass a `\t` -it's equivalent to 9 in ascii- prints (spaces are added for visibility purposes):
```
:: R2L Byte (9)
=> 1001 0000
:: L2R Byte (9)
 0000 1001 <=
 ```

 Seing this can help you understand better how the computer stores the bits. In my case this is printed in a MacOS Catalina. 

 The original direction of my system is from left to right as you can see in the example. Meaning that the most significant bit is on the left.
 ```
 0000 1001 <= (9 in base 10)
 ```

 How do I know what's the original direction?

 Well, think on a belt of a production line where on top of the line you have a bunch of boxes labaled with ordered numbers.  When you shift the belt from left to right like this `(myval >> 1)` What you are getting first is the last bit of the right. Like this:

```
     =================================
Indx | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
     ---------------------------------
Val  | 1 | 0 | 0 | 1 | 0 | 0 | 0 | 0 |
     =================================
```

 If you print directly you are going to reverse the orther of the boxes respecting on how the where originaly in the procuction belt. Now the index 7 becomes 0:

 ```
	 =====
Indx | 0 |
	 -----
Val  | 0 |
```
The index 6 becomes 1
 ```
	 =========
Indx | 0 | 1 |
	 ---------  ...
Val  | 0 | 0 |
     =========
```

I thin you are getting the idea. Until you reverse the full order of the boxes on the belt:


```
     =================================
Indx | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
     ---------------------------------
Val  | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |
     =================================
