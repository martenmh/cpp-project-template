#include "factorial.h"

#include <benchmark/benchmark.h>

static void BM_factorial(benchmark::State& state) {
	for(auto _: state) {
		factorial(state.range(0));
	}
	state.SetBytesProcessed(int64_t(state.iterations()) *
							int64_t(state.range(0)));
}

BENCHMARK(BM_factorial)->Range(0, 15);

BENCHMARK_MAIN();
