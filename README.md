# High Performance Computing (HPC) Tasks

This repository contains my coursework and practical tasks for the High Performance Computing (HPC) course.

## Task 1: CPU Cache Levels and Policies

A PDF report covering CPU cache hierarchy and related concepts, including:

- CPU Cache Levels (L1, L2, and L3)
- Cache Inclusion Policies
- Read and Write Operations
- Write-Through and Write-Back
- Write-Allocate and No-Write-Allocate
- Cache Sets and Ways

**Report:** `Cache_Levels.pdf`

## Task 2: Matrix Traversal Performance

### Objective

Compare the execution time of calculating the sum of a square matrix using two traversal methods.

### Implementations

- `row.c`: Processes the matrix row by row.
- `col.c`: Processes the matrix column by column.

### Matrix Sizes

- 100 × 100
- 1000 × 1000
- 10000 × 10000

### How to Run

#### 1. Create the Source Files

Create the row-by-row source file:

```bash
nano row.c
```

Write the code, then press `Ctrl + O`, `Enter`, and `Ctrl + X` to save and exit.

Create the column-by-column source file:

```bash
nano col.c
```

Write the code, then save and exit using the same steps.

#### 2. Compile the Programs

```bash
gcc -O0 row.c -o row
gcc -O0 col.c -o col
```

The `-O0` flag disables compiler optimization to help keep the comparison consistent.

#### 3. Measure Execution Time

Run the row-by-row program:

```bash
time ./row
```

Run the column-by-column program:

```bash
time ./col
```

The Unix `time` utility reports:

- **Real:** Total elapsed time.
- **User:** CPU time spent executing user-mode code.
- **Sys:** CPU time spent executing system-mode code on behalf of the program.

#### 5. Record the Results

Record the `real`, `user`, and `sys` values for both traversal methods and all matrix sizes in:

**Report:** `time_report.pdf`
