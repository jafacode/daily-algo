**Date: 2025.02.07** \
**[Problem Name](https://codeforces.com/problemset/problem/2062/C): Cirno and Operations** \
**Rating:** 1200
<body>
Cirno has a sequence 𝑎 of length 𝑛. She can perform either of the following two operations for any (possibly, zero) times unless the current length of 𝑎 is 1:

- Reverse the sequence. Formally, [𝑎1,𝑎2,…,𝑎𝑛] becomes [𝑎𝑛,𝑎𝑛−1,…,𝑎1] after the operation.
- Replace the sequence with its difference sequence. Formally, [𝑎1,𝑎2,…,𝑎𝑛]
becomes [𝑎2−𝑎1,𝑎3−𝑎2,…,𝑎𝑛−𝑎𝑛−1] after the operation. 

Find the maximum possible sum of elements of 𝑎 after all operations.

Input

The first line of input contains a single integer 𝑡
(1≤𝑡≤100) — the number of input test cases.

The first line of each test case contains a single integer 𝑛 (1≤𝑛≤50) — the length of sequence 𝑎

The second line of each test case contains 𝑛
integers 𝑎1,𝑎2,…,𝑎𝑛 (|𝑎𝑖|≤1000) — the sequence 𝑎

Output

For each test case, print an integer representing the maximum possible sum.
</body>

**Problem Summary** \
Find the largest possible sum of a sequence of numbers. You can reverse the order of the sequence, you can replace the sequence with its difference sequence.\

**Approches**
1. Brute force is the only method I can come up with as of now. Try:
- Original Sequence
- Original Difference Sequence
- Reversed Difference Sequence