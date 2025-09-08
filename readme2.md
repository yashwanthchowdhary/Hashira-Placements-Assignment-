Hashira Polynomial Solver (C Version)
📌 Overview

This project solves for the coefficients of a polynomial given a set of points encoded in different bases.

Test Case 1 → small polynomial (degree 2).

Test Case 2 → large polynomial (degree 6, requires GMP).

The workflow follows an AI-style data processing pipeline:

        JSON Input
            │
            ▼
   Base-Decoding (e.g., base 10, base 16)
            │
            ▼
  Decoded Points { (x1,y1), (x2,y2), ... }
            │
            ▼
 Vandermonde Matrix Construction
            │
            ▼
  Gaussian Elimination (precise solving)
            │
            ▼
 Polynomial Coefficients (a_m ... a_1, c)
            │
            ▼
   Constant Term "c" Extracted

Mathematical Representation

For a degree m polynomial:

𝑦
𝑖
=
𝑎
𝑚
𝑥
𝑖
𝑚
+
𝑎
𝑚
−
1
𝑥
𝑖
𝑚
−
1
+
⋯
+
𝑎
1
𝑥
𝑖
+
𝑐
y
i
	​

=a
m
	​

x
i
m
	​

+a
m−1
	​

x
i
m−1
	​

+⋯+a
1
	​

x
i
	​

+c
⚙️ Requirements

GCC Compiler

GNU MP Library (GMP) for big integer arithmetic

Install GMP (Ubuntu/Debian):

sudo apt-get install libgmp-dev

🛠️ Build Instructions

Clone the repo:

git clone https://github.com/chandraprakxsh/HashiraPolynomialSolver.git
cd HashiraPolynomialSolver


Compile both cases:

make


This generates:

case1 → Solver for Test Case 1 (small polynomial, no GMP).

case2 → Solver for Test Case 2 (large polynomial, uses GMP).

▶️ Run Instructions
Run Test Case 1
make run1


✅ Expected Output:

Polynomial coefficients:
a2 = 1
a1 = 0
a0 = 3
Constant term c = 3

Run Test Case 2
make run2


✅ Expected Output:

Polynomial coefficients:
a6 = 159964104901947204
a5 = -31591527745648281
a4 = 13767538396034502
a3 = 3168007049201610
a2 = 499692612302187
a1 = 54481140398142
a0 = 995085094601491
Constant term c = 995085094601491

🧹 Cleanup
make clean

🤖 AI Assistance

This project was structured with the help of AI tools to:

Decode JSON/base-encoded numbers

Set up Vandermonde matrices

Implement Gaussian elimination with GMP support

Auto-generate clean documentation & workflow diagrams

This demonstrates how AI-assisted workflows streamline solving mathematical + programming problems.
