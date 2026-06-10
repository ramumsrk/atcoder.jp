#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::max_element;

auto
a_bus_departure_time(
    const int& N,
    int const& K
) -> long long int {
    vector<long long int> T(N,0);
    for (auto& t : T) {
        cin>>t;
    }
    long long int max_T {*max_element(begin(T), end(T))};
    return max_T + K;
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    long long int max_T {a_bus_departure_time(N, K)};
    cout<<max_T<<endl;
    return EXIT_SUCCESS;
}