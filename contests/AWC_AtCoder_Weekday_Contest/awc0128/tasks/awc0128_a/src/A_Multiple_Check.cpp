#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
a_multiple_check(
    const int& N,
    const long long int& K
) -> int {
    long long int A {};
    int A_count {};
    for (int i {}; i < N; i += 1) {
        cin>>A;
        if (A%K == 0) {
            A_count += 1;
        }
    }
    return A_count;
}

auto
main(void) -> int {
    int N {};
    long long int K {};
    cin>>N>>K;
    int A_count {a_multiple_check(N, K)};
    cout<<A_count<<endl;
    return EXIT_SUCCESS;
}
