#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::min;

auto
b_fruit_harvest(
    const int& N,
    int const& K
) -> long long int {
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    long long int fruits_harvested {};
    for (int i {}; i < K; i += 1) {
        fruits_harvested += A[i];
    }
    long long int min_fruits_harvested {fruits_harvested};
    for (int i {1}; i <= N-K; i += 1) {
        fruits_harvested -= A[i-1];
        fruits_harvested += A[(i+K)-1];
        min_fruits_harvested = min(min_fruits_harvested, fruits_harvested);
    }
    return min_fruits_harvested;
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    long long int min_fruits_harvested {b_fruit_harvest(N, K)};
    cout<<min_fruits_harvested<<endl;
    return EXIT_SUCCESS;
}