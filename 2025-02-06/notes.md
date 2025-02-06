**Date: 2025.02.06** \
**[Problem Name](https://codeforces.com/problemset/problem/4/A): Watermelon**
<body>
One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

Input:
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output:
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

Examples:

Input: 8

Output: YES

Note

For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).
</body>

**Problem Summary** \
A number between 1 and 100 is given and we have to check if the number can be divided in to two even numbers(the two numbers does not have to be equal).\

**Approches**
1. Discrete Math type shiiii
   Let x,y be even numbers and x+y = w. Let n, m be integers, where x = 2n, y = 2m. Then 2n + 2m = w. Thus, n+m = w/2. Since n, m are integers n+m has to be an integer. if w/2 is an integer it is true. HOWEVER, n+m>1, so w>2. 