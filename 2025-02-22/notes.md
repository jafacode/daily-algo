**Date: 2025.02.20** \
**[Problem Name](https://codeforces.com/problemset/problem/2063/A): Minimal Coprime** \
**Rating:** 800

**Problem Summary** \
Given a range [l, r], find the number of minimal coprime segments where a segment [x, y] is coprime if gcd(x, y) = 1, and minimal if it contains no smaller coprime segment. \

**Approches**
    Count consecutive coprime pairs [x, x+1] starting from max(l, 2) to r-1.

    Add 1 if 1 is in [l, r] for the segment [1, 1].

    This works because consecutive pairs and [1, 1] are the only minimal coprime segments.