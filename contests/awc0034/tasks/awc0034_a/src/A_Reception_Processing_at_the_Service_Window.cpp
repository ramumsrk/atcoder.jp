#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::accumulate;

auto
main(void) -> int {
    int N {}, M {};
    cin>>N>>M;
    vector<long long int> C(N,0);
    for (auto& c : C) {
        cin>>c;
    }
    vector<int> T(N,0);
    for (int m {}; m < M; m += 1) {
        int t {};
        cin>>t;
        if (T[t-1] < C[t-1]) {
            T[t-1] += 1;
        }
    }
    cout<<accumulate(begin(T), end(T), int {})<<endl;
    return EXIT_SUCCESS;
}