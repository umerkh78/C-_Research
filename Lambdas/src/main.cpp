#include <benchmark/benchmark.h>
#include <vector>
#include <cstdlib>  // for rand()
#include <execution>  // for parallel execution policies in C++17

// Function to fill a matrix with random values
void fillMatrix(std::vector<std::vector<int>>& matrix, int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = rand() % 100;  // Filling with random numbers between 0 and 99
        }
    }
}

// Matrix multiplication using a simple function
void simpleFunctionMultiply(const std::vector<std::vector<int>>& A,
                            const std::vector<std::vector<int>>& B,
                            std::vector<std::vector<int>>& C,
                            int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < N; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Matrix multiplication using a lambda function
void lambdaFunctionMultiply(const std::vector<std::vector<int>>& A,
                            const std::vector<std::vector<int>>& B,
                            std::vector<std::vector<int>>& C,
                            int N) {
    auto multiply = [&](int i, int j) {
        int sum = 0;
        for (int k = 0; k < N; ++k) {
            sum += A[i][k] * B[k][j];
        }
        return sum;
    };

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            C[i][j] = multiply(i, j);
        }
    }
}

// Matrix multiplication using a parallel lambda function
void parallelLambdaMultiply(const std::vector<std::vector<int>>& A,
                            const std::vector<std::vector<int>>& B,
                            std::vector<std::vector<int>>& C,
                            int N) {
    auto multiply = [&](int i, int j) {
        int sum = 0;
        for (int k = 0; k < N; ++k) {
            sum += A[i][k] * B[k][j];
        }
        return sum;
    };

    // Parallel for_each loop
    std::for_each(std::execution::par, C.begin(), C.end(), [&](std::vector<int>& row) {
        int i = &row - &C[0];  // Get the index of the current row
        for (int j = 0; j < N; ++j) {
            C[i][j] = multiply(i, j);
        }
    });
}

// Benchmark for simple function
static void BM_SimpleFunctionMultiply(benchmark::State& state) {
    int N = state.range(0);
    std::vector<std::vector<int>> A(N, std::vector<int>(N));
    std::vector<std::vector<int>> B(N, std::vector<int>(N));
    std::vector<std::vector<int>> C(N, std::vector<int>(N, 0));

    fillMatrix(A, N);  // Fill matrix A with random values
    fillMatrix(B, N);  // Fill matrix B with random values

    for (auto _ : state) {
        simpleFunctionMultiply(A, B, C, N);
    }
}

// Benchmark for lambda function
static void BM_LambdaFunctionMultiply(benchmark::State& state) {
    int N = state.range(0);
    std::vector<std::vector<int>> A(N, std::vector<int>(N));
    std::vector<std::vector<int>> B(N, std::vector<int>(N));
    std::vector<std::vector<int>> C(N, std::vector<int>(N, 0));

    fillMatrix(A, N);  // Fill matrix A with random values
    fillMatrix(B, N);  // Fill matrix B with random values

    for (auto _ : state) {
        lambdaFunctionMultiply(A, B, C, N);
    }
}

// Benchmark for parallel lambda function
static void BM_ParallelLambdaMultiply(benchmark::State& state) {
    int N = state.range(0);
    std::vector<std::vector<int>> A(N, std::vector<int>(N));
    std::vector<std::vector<int>> B(N, std::vector<int>(N));
    std::vector<std::vector<int>> C(N, std::vector<int>(N, 0));

    fillMatrix(A, N);  // Fill matrix A with random values
    fillMatrix(B, N);  // Fill matrix B with random values

    for (auto _ : state) {
        parallelLambdaMultiply(A, B, C, N);
    }
}

// Register the benchmarks with a range of sizes
// Register the benchmarks with specific sizes: 5, 25, and 125
BENCHMARK(BM_SimpleFunctionMultiply)->Args({5})->Args({25})->Args({125});
BENCHMARK(BM_LambdaFunctionMultiply)->Args({5})->Args({25})->Args({125});
BENCHMARK(BM_ParallelLambdaMultiply)->Args({5})->Args({25})->Args({125});


// Main function for benchmark
BENCHMARK_MAIN();
