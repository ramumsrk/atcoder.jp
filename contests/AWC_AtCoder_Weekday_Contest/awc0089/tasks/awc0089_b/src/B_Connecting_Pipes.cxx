#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::max;

auto
b_connecting_pipes(
    const int& N,
    __int128_t const& D,
    const long long int& K,
    long long int const& C
) -> void {
    vector<long long int> A(N,0);
    for (int i {}; i < N; i += 1) {
        int B {};
        cin>>A[i]>>B;
        if (B == 1) {
            A[i] = max(A[i]-C,static_cast<long long int>(0));
        }
    }
}

auto
main(void) -> int {
    int N {};
    long long int d {}, K {}, C {};
    cin>>N>>d>>K>>C;
    __int128_t D {d};
    // function call
    b_connecting_pipes(N, D, K, C);
    return EXIT_SUCCESS;
}