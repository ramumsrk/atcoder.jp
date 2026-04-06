#include <iostream>
#include <cstdlib>
#include <vector>
#include <utility>

using std::vector;
using std::pair;
using std::cin;
using std::cout;
using std::endl;

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<pair<pair<int,int>,int>> CK(N,{{0,0},0});
    for (int n {}; n < N; n += 1) {
        int C {}, K {};
        cin>>C>>K;
        CK[n].first.first = C;
        CK[n].first.second = K;
    }
    int TP {};
    for (int m {}; m < M; m += 1) {
        int P {};
        cin>>P;
        if (CK[P-1].second < CK[P-1].first.second) {
            CK[P-1].second += 1;
            TP += CK[P-1].first.first;
        }
    }
    cout<<TP<<endl;
    return EXIT_SUCCESS;
}