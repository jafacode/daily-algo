**[Problem Name](https://codeforces.com/problemset/problem/2062/A): A. String** \
**Rating:** 800

**Problem Summary** \
When a string that consists of 0 and/or 1 is given return the minimum number of operations that is required to change all the characters to 0. There has to be at least one 0. \

**Approches**
1. 
    If all characters of the string is 0 return 0
    while there still is 1 in the string
        find the longest 101010...101 t sequence and invert it(when finding the elements of t, 1=the first one, 0=the last possible one)
    Return number of inverts