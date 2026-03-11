#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>

using std::accumulate;
using std::begin;
using std::end;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
e_elevator_transport(
    const int& N,
    long long int const& C,
    const vector<long long int>& W
) -> int {
    long long int total_W = accumulate(begin(W), end(W), int {});
    auto quotient {total_W/C};
    auto remainder {total_W%C};
    int trips {};
    if (remainder == 0) {
        trips = quotient;
    } else {
        trips += (quotient + 1);
    }
    return trips;
}

auto
main(void) -> int {
    int N {};
    long long int C {};
    cin>>N>>C;
    vector<long long int> W(N,0);
    for (auto& w : W) {
        cin>>w;
    }
    cout<<e_elevator_transport(N, C, W)<<endl;
    return EXIT_SUCCESS;
}