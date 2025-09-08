# Hashira-Placements-Assignment-
Hashira Polynomial Solver (C Version)
📌 Overview

This project solves for the coefficients of a polynomial given a set of points encoded in different bases.

Test Case 1 uses small integer values (degree 2 polynomial).

Test Case 2 uses very large integers (degree 6 polynomial) requiring GMP for arbitrary precision arithmetic.

The workflow mirrors AI-style data processing:

Parse & normalize data (multi-base decoding → integers).

Build a Vandermonde system of equations.

Solve with Gaussian Elimination (BigInteger-safe for Case 2).

Extract polynomial coefficients and constant term.

⚙️ Requirements

GCC Compiler

GNU MP Library (GMP) for big integer arithmetic

Install GMP (Ubuntu/Debian)
sudo apt-get install libgmp-dev

🛠️ Build Instructions
Clone the Repo
git clone https://github.com/chandraprakxsh/HashiraPolynomialSolver.git
cd HashiraPolynomialSolver

Compile Both Cases
make


This will generate:

case1 → Solver for Test Case 1 (small polynomial, no GMP needed)

case2 → Solver for Test Case 2 (large polynomial, uses GMP)

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

The project design and implementation were structured with the help of AI tools to accelerate problem-solving, particularly for:

JSON/base decoding strategy

Polynomial system formulation

Gaussian elimination with BigInteger/GMP

Readme & project structuring

This showcases how AI-assisted workflows can help solve mathematical + programming challenges efficiently.
