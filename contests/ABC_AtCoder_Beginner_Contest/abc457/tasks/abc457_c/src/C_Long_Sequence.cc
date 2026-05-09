#include <iostream>
#include <cstdlib>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto
main(void) -> int {
    int N {}, K {};
    cin>>N>>K;
    vector<vector<long long int>> A(N,vector<long long int>(0,0));
    for (int i {}; i < N; i += 1) {
        int L {};
        cin>>L;
        vector<long long int> v(L,0);
        for (auto& e : v) {
            cin>>e;
        }
        A[i] = v;
    }
    vector<long long int> C(N,0);
    for (auto& c : C) {
        cin>>c;
    }
    vector<__int128_t> B(0,0);
    for (int i {}; i < N; i += 1) {
        int A_size {static_cast<int>(A[i].size())};
        for (int j {}; j < C[i]; j += 1) {
            for (int k {}; k < A_size; k += 1) {
                B.push_back(A[i][k]);
            }
        }
    }
    cout<<static_cast<long long int>(B[K-1])<<endl;
    return EXIT_SUCCESS;
}