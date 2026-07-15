#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
a_budget_and_estimate_discrepancy(
    const int& N,
    int const& M
) -> void {
    vector<long long int> P(N,0);
    for (auto& p : P) {
        cin>>p;
    }
    vector<long long int> Q(N,0);
    for (auto& q : Q) {
        cin>>q;
    }
    vector<__int128_t> differences(M,0);
    for (int j {}; j < M; j += 1) {
        int K {};
        cin>>K;
        __int128_t sum_P {}, sum_Q {};
        vector<int> C(K,0);
        for (auto& c : C) {
            cin>>c;
            sum_P += P[c-1];
            sum_Q += Q[c-1];
        }
        __int128_t difference {sum_P - sum_Q};
        differences[j] = difference;
    }
    for (const auto& difference : differences) {
        cout<<static_cast<long long int>(difference)<<endl;
    }
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    a_budget_and_estimate_discrepancy(N, M);
    return EXIT_SUCCESS;
}