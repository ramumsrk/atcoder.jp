#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
a_neighbourhood_association_audit(
    long long int S,
    const int& P,
    const __int128_t& R
) -> __int128_t {
    int M {};
    cin>>M;
    for (int i {}; i < M; i += 1) {
        int e {};
        cin>>e;
        if (e == 1) {
            long long int v {};
            cin>>v;
            S += v;
        } else if (e == 2) {
            int v {};
            cin>>v;
            S -= (v*P);
        }
    }
    return ((__int128_t)S-R);
}

auto
main(void) -> int {
    long long int S {};
    int P {};
    long long int r {};
    cin>>S>>P>>r;
    __int128_t R {r};
    // function call
    __int128_t result {a_neighbourhood_association_audit(S, P, R)};
    cout<<(long long int)result<<endl;
    return EXIT_SUCCESS;
}