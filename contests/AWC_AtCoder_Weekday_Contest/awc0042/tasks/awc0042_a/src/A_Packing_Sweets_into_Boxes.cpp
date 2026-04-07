#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {};
    long long int K {};
    cin>>N>>K;
    long long int boxes {};
    for (int n {}; n < N; n += 1) {
        long long int A {}, B {};
        cin>>A>>B;
        if ((A > 0 || B > 0) && (A+B <= K)) {
            boxes += 1;
        } else if (A+B > K) {
            long long int remaining {(A+B)};
            while (remaining >= 1) {
                boxes += 1;
                remaining -= K;
            }
        }
    }
    cout<<boxes<<endl;
    return EXIT_SUCCESS;
}