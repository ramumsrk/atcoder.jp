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
    long long int S {};
    cin>>S;
    vector<int> P(N,0);
    for (auto& p : P) {
        cin>>p;
    }
    long long int X {};
    for (int m {}; m < M; m += 1) {
        int T {}, Q {};
        cin>>T>>Q;
        X = P[T-1]*Q;
        S += X;
        S -= (X/2);
    }
    cout<<S<<endl;
    return EXIT_SUCCESS;
}