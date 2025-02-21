**Date: 2025.02.20** \
**[Problem Name](https://codeforces.com/problemset/problem/2061/A): Kevin and Arithmetic** \
**Rating:** 800

**Problem Summary** \
It is very simple, no matter how many even numbers you have only one will be +1, then any other odd numbers is a +1.\

**Approches**
1. Brute force 
- Count number of even numbers and odd numbers
- If even numbers is more than 1 -> +1
    -Then add +x number of odd numbers to the sum
- If even numbers is 0
    -Output = even numbers count - 1