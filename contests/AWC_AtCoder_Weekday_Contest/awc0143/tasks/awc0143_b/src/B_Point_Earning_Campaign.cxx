#include <iostream>
#include <cstdlib>
#include <numeric>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::accumulate;
using std::begin;
using std::end;
using std::vector;

auto
b_point_earning_campaing(
    const int& N,
    const int& K
) -> __int128_t {
    vector<long long int> P(N,0);
    for (auto& p : P) {
        cin>>p;
    }
    __int128_t max_total_points {};    
    if (K >= N) {
        max_total_points += accumulate(begin(P), end(P), int {});
    } else {
        sort(begin(P), end(P));
        for (int i {N-1}; i >= N-K; i -= 1) {
            max_total_points += P[i];
        }
    }
    return max_total_points;
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    // function call
    __int128_t max_total_points {b_point_earning_campaing(N, K)};
    cout<<static_cast<long long int>(max_total_points)<<endl;
    return EXIT_SUCCESS;
}