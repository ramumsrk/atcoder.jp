#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;
using std::accumulate;
using std::max;

auto
a_popularity_of_friends(
    const int& N,
    const int& M
) -> __int128_t {
    vector<vector<int>> UV(N,vector<int>(0,0));
    int U {}, V {};
    for (int j {}; j < M; j += 1) {
        cin>>U>>V;
        if (U != V) {
            UV[U-1].push_back(V-1);
            UV[V-1].push_back(U-1);
        }
    }
    __int128_t max_UV {}, sum_UV {};
    for (int i {}; i < N; i += 1) {
        int UV_i_size = static_cast<int>(UV[i].size());
        sum_UV = accumulate(begin(UV[i]), end(UV[i]), int {});
        sum_UV += UV_i_size;
        max_UV = max(max_UV, sum_UV);
    }
    return max_UV;
}

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    // function call
    __int128_t max_UV {a_popularity_of_friends(N, M)};
    cout<<static_cast<long long int>(max_UV)<<endl;
    return EXIT_SUCCESS;
}