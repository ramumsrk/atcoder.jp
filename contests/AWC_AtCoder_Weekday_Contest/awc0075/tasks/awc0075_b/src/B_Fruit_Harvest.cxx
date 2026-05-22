#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::accumulate;
using std::min_element;

auto
b_fruit_harvest(
    const int& N,
    int const& K
) -> long long int {
    vector<long long int> A(N,0);
    for (auto& a : A) {
        cin>>a;
    }
    auto start_it {begin(A)};
    auto end_it {begin(A)+K};
    long long int min_total_fruits {accumulate(start_it, end_it, int {})};
    vector<long long int> v(0,0);
    v.push_back(min_total_fruits);
    for (int i {1}; i <= N-K; i += 1) {
        min_total_fruits -= A[i-1];
        min_total_fruits += A[i+(K-1)];
        v.push_back(min_total_fruits);
    }
    // for (const auto& e : v) {
    //     cout<<e<<' ';
    // }
    // cout<<endl;
    return  {*min_element(begin(v), end(v))};
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    long long int min_total_fruits {b_fruit_harvest(N, K)};
    cout<<min_total_fruits<<endl;
    return EXIT_SUCCESS;
}