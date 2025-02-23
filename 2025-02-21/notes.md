**Date: 2025.02.20** \
**[Problem Name](https://codeforces.com/problemset/problem/2063/A): Minimal Coprime** \
**Rating:** 800

**Problem Summary** \
It is very simple, no matter how many even numbers you have only one will be +1, then any other odd numbers is a +1.\

**Approches**
1. What is this method called
If l == r return l
Iterate through x in max(l, r) and check if gcd(x, y) = 1. Check if there are no more smaller x and return that x.

