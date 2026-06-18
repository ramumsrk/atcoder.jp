#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::min_element;
using std::max_element;
using std::begin;
using std::end;

auto
b_temperature_fluctuations(
    const int& N,
    int const& K
) -> int {
    vector<int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    vector<int> S(0,0);
    int current_sum {};
    for (int i {}; i < K; i += 1) {
        current_sum += A[i];
    }
    S.push_back(current_sum);
    for (int j {K}; j < N; j += 1) {
        current_sum -= A[j];
        current_sum += A[j-K];
        S.push_back(current_sum);
    }
    auto min_S {*min_element(begin(S), end(S))}, max_S {*max_element(begin(S), end(S))};
    return max_S - min_S;
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    // function call
    cout<<b_temperature_fluctuations(N, K)<<endl;
    return EXIT_SUCCESS;
}