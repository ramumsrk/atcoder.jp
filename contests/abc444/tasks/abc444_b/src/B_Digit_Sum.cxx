#include <cstdlib>
#include <cstdint>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

auto
digits_sum(
    const int& N
) -> int {
    int n {N}, r {}, ds {};
    while (n > 0) {
        r = n % 10;
        ds += r;
        n /= 10;
    }
    return ds;
}

auto
b_digit_sum(
    const int& N,
    int const& K
) -> int {
    int count {};
    for (int i {1}; i <= N; i += 1) {
        if (i < K) {
            ;
        } else if (digits_sum(i) == K) {
            count += 1;
        }
    }
    return count;
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    cout<<b_digit_sum(N, K)<<endl;
    return EXIT_SUCCESS;
}