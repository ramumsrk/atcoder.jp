#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
a_organizing_the_bookshelf(
    const int& N,
    long long int const& S,
    const long long int& K
) -> __int128_t {
    vector<long long int> D(N,0);
    for (auto& d : D) {
        cin>>d;
    }
    __int128_t min_possible_distance {};
    min_possible_distance += S+K+((N-1)*K);
    for (const auto& d : D) {
        min_possible_distance += d;
    }
    return min_possible_distance;    
}

auto
main(void) -> int {
    int N {};
    long long int S {}, K {};
    cin>>N>>S>>K;
    __int128_t min_possible_distance {a_organizing_the_bookshelf(N, S, K)};
    cout<<static_cast<long long int>(min_possible_distance)<<endl;
    return EXIT_SUCCESS;
}
