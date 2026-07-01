#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
a_meeting_place(
    const int& N,
    int const& K
) -> __int128_t {
    vector<__int128_t> X(N,0);
    long long int x {};
    for (auto& e : X) {
        cin>>x;
        e = x;
    }
    return X[K-1]-1;
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    cout<<static_cast<long long int>(a_meeting_place(N, K))<<endl;
    return EXIT_SUCCESS;
}
