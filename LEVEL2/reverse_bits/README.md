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

 The original direction of my system is from left to right as you can see in the example.
 ```
 => 1001 000 (9 in base 10) 
 ```

 
