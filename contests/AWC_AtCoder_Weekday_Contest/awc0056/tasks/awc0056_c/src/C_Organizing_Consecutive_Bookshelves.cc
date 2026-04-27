#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::begin;
using std::end;

auto
main(void) -> int {
    int N {};
    long long int K {};
    cin>>N>>K;
    __int128_t kK {K};
    vector<long long int> A(N,0);
    for (auto& e : A) {
        cin>>e;
    }
    sort(begin(A), end(A));
    vector<__int128_t> prefixsum_A(N,0);
    prefixsum_A[0] = A[0];
    for (int i {1}; i < N; i += 1) {
        prefixsum_A[i] = A[i] + prefixsum_A[i-1];
    }
    int maximum_books {};
    for (int i {}; i < N; i += 1) {
        if (prefixsum_A[i] <= kK) {
            maximum_books += 1;
        } else {
            break;
        }
    }
    cout<<maximum_books<<endl;
    return EXIT_SUCCESS;
}