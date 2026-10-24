# High Performance Computing (HPC) Tasks

This repository contains practical tasks for the HPC course.

## Task 1: CPU Cache Levels & Policies
A report covering CPU cache hierarchy (L1-L3), inclusion policies, and write operations.
**Report:** `Task1_Cache_Levels.pdf`

## Task 2: Matrix Traversal Performance
Comparing execution time between row-by-row (`row.c`) and column-by-column (`col.c`) matrix traversal without compiler optimization.
- **Compile:** `gcc -O0 row.c -o row` and `gcc -O0 col.c -o col`
- **Run & Measure:** `time ./row` and `time ./col`
**Report:** `time_report.pdf`

## Task 3: Loop Unrolling Technique
A report discussing the loop unrolling technique, its impact on execution performance, and Instruction-Level Parallelism (ILP).
**Report:** `Task3_Loop Unrolling.pdf`
