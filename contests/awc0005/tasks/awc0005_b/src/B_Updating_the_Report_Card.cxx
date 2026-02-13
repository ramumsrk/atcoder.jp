#include <cstdlib>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {}, M {}, K {};
    cin>>N>>M>>K;
    vector<int> S(N,0);
    for (auto& s : S) {
        cin>>s;
    }
    for (int i {}; i < M; i += 1) {
        int P {}, V {};
        cin>>P>>V;
        S[P-1] = V;
    }
    int c {};
    for (int i {}; i < N; i += 1) {
        if (S[i] < K) {
            c += 1;
        }
    }
    cout<<c<<endl;
    return EXIT_SUCCESS;
}