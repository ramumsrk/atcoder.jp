#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {};
    long long int T {}, K {};
    cin>>N>>T>>K;
    vector<long long int> H(N,0);
    for (auto& h : H) {
        cin>>h;
    }
    int apples {};
    for (int i {}; i < N; i += 1) {
        if ((T+K) >= H[i]) {
            apples += 1;
        } else if (
            (H[i] - K) >= 1
            &&
            ((T+K) >= (H[i] -K))
        ) {
            apples += 1;
        }
    }
    cout<<apples<<endl;
    return EXIT_SUCCESS;
}