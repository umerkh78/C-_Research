#include <benchmark/benchmark.h>
#include <vector>

#define dataSize 1

class MyData {
public:
    std::vector<int> data;

    // Constructor
    MyData(size_t size) : data(size) {
    }

    // Copy constructor
    MyData(const MyData& other) : data(other.data) {
    }

    // Move constructor
    MyData(MyData&& other) noexcept : data(std::move(other.data)) {
    }
};

// Benchmark for the copy constructor
static void BM_CopyConstructor(benchmark::State& state) {
    for (auto _ : state) {  // Loop for the number of iterations
        MyData original(state.range(0));
        MyData copy(original);  // Copy constructor is called
    }
}
BENCHMARK(BM_CopyConstructor)->RangeMultiplier(10)->Range(10, 100000);

// Benchmark for the move constructor
static void BM_MoveConstructor(benchmark::State& state) {
    for (auto _ : state) {  // Loop for the number of iterations
        MyData original(state.range(0));
        MyData moved(std::move(original));  // Move constructor is called
    }
}
BENCHMARK(BM_MoveConstructor)->RangeMultiplier(10)->Range(10, 100000);

BENCHMARK_MAIN();
