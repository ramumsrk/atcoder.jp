#include <iostream>
#include <cstdlib>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<long long int> P(M,0);
    for (auto& p : P) {
        cin>>p;
    }
    for (int n {}; n < N; n += 1) {
        int K {};
        cin>>K;
        if (K == 0) {
            cout<<0<<endl;
        } else {
            vector<int> C(K,0);
            for (auto& c : C) {
                cin>>c;
            }
            auto maxp {P[C[0]]};
            auto maxpp {C[0]};
            for (int k {0}; k < K; k += 1) {
                if (maxp == P[C[k]-1] && maxpp > C[k]) {
                    maxpp = C[k];
                } else if (maxp > P[C[k]-1]) {
                    maxp = P[C[k]-1];
                    maxpp = C[k];
                }
            }
            cout<<maxpp<<endl;
        }
    }
    return EXIT_SUCCESS;
}