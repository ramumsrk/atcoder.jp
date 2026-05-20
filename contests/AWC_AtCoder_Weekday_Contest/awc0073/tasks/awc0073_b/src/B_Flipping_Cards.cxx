#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::accumulate;
using std::begin;
using std::end;
using std::map;

auto
b_flipping_cards(
    const int& N,
    int const& K
) -> int {
    vector<int> F(N,0);
    vector<int> B(N,0);
    int max_sum {}, f {}, b {};
    map<int,int> FB;
    for (int i {}; i < N; i += 1) {
        cin>>f>>b;
        F[i]=f;
        B[i]=b;
        FB[b]=f;
    }
    if (K == 0) {
        max_sum = accumulate(begin(F), end(F), int {});
    } else {
        int F_sum {accumulate(begin(F), end(F), int {})};
        sort(begin(B), end(B));
        for (int j {N-1}, l {}; l < K; j -= 1, l += 1) {
            F_sum -= FB[B[j]];
            F_sum += B[j];
        }
        max_sum += F_sum;
    }
    return max_sum;
}

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    // function call
    int max_sum {b_flipping_cards(N, K)};
    cout<<max_sum<<endl;
    return EXIT_SUCCESS;
}